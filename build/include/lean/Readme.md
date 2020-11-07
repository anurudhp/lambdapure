#!/usr/bin/env bash
# Lean compiler
#
# A simple wrapper around C and C++ compilers. Defaults to the compiler Lean was built with,
# which can be overridden with the environment variables `LEAN_CC` and `LEAN_CXX`. All parameters are passed
# as-is to the wrapped compiler.
#
# Interesting options:
# * `-U LEAN_MULTI_THREAD` can be used to optimize programs not making use of multi-threading

set -e
bindir=$(dirname $0)

# As an optimization, we use a C compiler for compiling object files without linking.
# C files produced by Lean are also valid C++ files, but C compilers tend to be faster.
# Final linking still has to be done by a C++ compiler because we need to link against the
# Lean runtime written in C++ (https://isocpp.org/wiki/faq/mixing-c-and-cpp#overview-mixing-langs).
use_c=maybe
# NOTE: leanstatic and leanstdlib are cyclically dependent
linker_flags="-lleanstatic -lleanstdlib -lleanstatic -lleanstdlib"


for arg in "$@"; do
    [[ $use_c == maybe && $arg == "-c" ]] && use_c=yes
    [[ $arg == *.c ]] && use_c=yes
    [[ $arg == *.cpp ]] && use_c=no
    [[ $arg == "-shared" ]] && linker_flags="@LEANC_SHARED_LINKER_FLAGS@"
done

if [[ $use_c == yes ]]; then
    # Check C compiler
    for cc in $LEAN_CC @CMAKE_C_COMPILER@ /usr/bin/gcc; do
        if [ -f $cc ] || command -v $cc; then
            export LEAN_CC=$cc && break
        fi
    done
    [ -f $LEAN_CC ] || command -v $LEAN_CC || error "no suitable C compiler found!"

    @CMAKE_C_COMPILER_LAUNCHER@ $LEAN_CC -D LEAN_MULTI_THREAD "-I$bindir/../src" "-I$bindir/../include" "$@" "-L$bindir" "-L$bindir/../lib" $linker_flags -lgmp @LEANC_EXTRA_FLAGS@ -Wno-unused-command-line-argument
else
    # Check C++ compiler
    for cxx in $LEAN_CXX @CMAKE_CXX_COMPILER@ /usr/bin/g++; do
        if [ -f $cxx ] || command -v $cxx; then
            export LEAN_CXX=$cxx && break
        fi
    done
    [ -f $LEAN_CXX ] || command -v $LEAN_CXX || error "no suitable C++ compiler found!"

    @CMAKE_CXX_COMPILER_LAUNCHER@ $LEAN_CXX -std=c++14 -D LEAN_MULTI_THREAD "-I$bindir/../src" "-I$bindir/../include" "$@" "-L$bindir" "-L$bindir/../lib" $linker_flags -lgmp @LEANC_EXTRA_FLAGS@ -Wno-unused-command-line-argument
fi
