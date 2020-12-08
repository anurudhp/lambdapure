// Lean compiler output
// Module: Test.bintree
// Imports: Init.Default
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* _lean_main(lean_object*, lean_object*);
lean_object* l_main___boxed__const__1;
uint32_t l_UInt32_add(uint32_t, uint32_t);
lean_object* l_walk___main(lean_object*);
uint32_t l_UInt32_sub(uint32_t, uint32_t);
lean_object* l_make___boxed(lean_object*);
lean_object* l_Tree_Inhabited;
lean_object* l_make_x27___main___closed__1;
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_walk(lean_object*);
lean_object* l_make_x27(uint32_t, uint32_t);
lean_object* l_make_x27___boxed(lean_object*, lean_object*);
lean_object* l_make(uint32_t);
lean_object* l_make_x27___main(uint32_t, uint32_t);
lean_object* l_make_x27___main___boxed(lean_object*, lean_object*);
lean_object* _init_l_Tree_Inhabited() {
_start:
{
lean_object* x_1;
x_1 = lean_box(0);
return x_1;
}
}
lean_object* _init_l_make_x27___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2;
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l_make_x27___main(uint32_t x_1, uint32_t x_2) {
_start:
{
uint32_t x_3; uint8_t x_4;
x_3 = 0;
x_4 = x_2 == x_3;
if (x_4 == 0)
{
uint32_t x_5; uint32_t x_6; lean_object* x_7; uint32_t x_8; lean_object* x_9; lean_object* x_10;
x_5 = 1;
x_6 = x_2 - x_5;
x_7 = l_make_x27___main(x_1, x_6);
x_8 = x_1 + x_5;
x_9 = l_make_x27___main(x_8, x_6);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11;
x_11 = l_make_x27___main___closed__1;
return x_11;
}
}
}
lean_object* l_make_x27___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; lean_object* x_5;
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_make_x27___main(x_3, x_4);
return x_5;
}
}
lean_object* l_make_x27(uint32_t x_1, uint32_t x_2) {
_start:
{
lean_object* x_3;
x_3 = l_make_x27___main(x_1, x_2);
return x_3;
}
}
lean_object* l_make_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; lean_object* x_5;
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_make_x27(x_3, x_4);
return x_5;
}
}
lean_object* l_make(uint32_t x_1) {
_start:
{
lean_object* x_2;
x_2 = l_make_x27___main(x_1, x_1);
return x_2;
}
}
lean_object* l_make___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3;
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_make(x_2);
return x_3;
}
}
lean_object* l_walk___main(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_1;
}
else
{
uint8_t x_2;
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
  printf("exclusve\n" );
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6;
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_dec(x_4);
x_5 = l_walk___main(x_3);
x_6 = lean_box(0);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
  printf("not exclusive\n" );

lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10;
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_walk___main(x_7);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
}
lean_object* l_walk(lean_object* x_1) {
_start:
{
lean_object* x_2;
x_2 = l_walk___main(x_1);
return x_2;
}
}
lean_object* _init_l_main___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2;
x_1 = 0;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
lean_object* _lean_main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4;
lean_dec(x_1);
x_3 = l_main___boxed__const__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* initialize_Init_Default(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Test_bintree(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Default(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Tree_Inhabited = _init_l_Tree_Inhabited();
lean_mark_persistent(l_Tree_Inhabited);
l_make_x27___main___closed__1 = _init_l_make_x27___main___closed__1();
lean_mark_persistent(l_make_x27___main___closed__1);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
return lean_mk_io_result(lean_box(0));
}
void lean_initialize_runtime_module();
int main(int argc, char ** argv) {
lean_object* in; lean_object* res;
lean_initialize_runtime_module();
res = initialize_Test_bintree(lean_io_mk_world());
lean_io_mark_end_initialization();
if (lean_io_result_is_ok(res)) {
lean_dec_ref(res);
lean_init_task_manager();
in = lean_box(0);
int i = argc;
while (i > 1) {
 lean_object* n;
 i--;
 n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
 in = n;
}
res = _lean_main(in, lean_io_mk_world());
}
lean_object* tree = l_make(10);
l_walk(tree);
}
#ifdef __cplusplus
}
#endif
