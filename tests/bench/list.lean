
set_option trace.compiler.ir.init true
inductive L
| Nil
| Cons : Nat -> L -> L


open L

instance : Inhabited L := ⟨Nil⟩

def map : (Nat -> Nat) -> L -> L
| f, Nil => Nil
| f, Cons n l => Cons (f n) (map f l)



def add_one (x:Nat) :Nat := x + 1

partial def make' : Nat -> Nat -> L
| n,d =>
  if d = 0 then Cons n Nil
  else Cons (n-d) (make' n (d -1))

def make (n : Nat) : L := make' n n

def sum : L -> Nat
| Cons x l => x + (sum l)
| Nil =>  0

unsafe def main : List String → IO UInt32
| _ => do
  let result := sum(map add_one (make 10000000));
  IO.println(result);
  pure 0
