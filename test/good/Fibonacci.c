/*
class Fibonacci {
  public static void main(String[] args) {
    System.out.println(new Fibo().fibo());
  }
}
class Fibo {
  public int fibo() {
    int x;
    x = 5;
    if (10 <= 10) {
      x++;
    }
    else {
      x = 2;
    }
    return x;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct Fibo;
void* Fibo_fibo(struct Fibo* this);
struct Fibo {
  void* (**vtable)();
};
void* (*Fibo_vtable[])() = { Fibo_fibo };
void* Fibo_fibo(struct Fibo* this) {
  int x;
  x = 5;
  if ((10 <= 10)) {
    x++;
  }
  else {
    x = 2;
  }
  return (void*)(x);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  printf("%d\n", ({ struct Fibo* tmp1 = ({ struct Fibo* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Fibo_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  tgc_stop(&gc);

  return 0;
}
