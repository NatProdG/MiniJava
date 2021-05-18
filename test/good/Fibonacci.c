/*
class Fibonacci {
  public static void main(String[] args) {
    System.out.println(new Fibo().fibo(10));
  }
}
class Fibo {
  public int fibo(int n) {
    int res;
    res++;
    res = 0;
    if (n < 2) {
      res = n;
    }
    else {
      res = this.fibo(n - 2) + this.fibo(n - 1);
    }
    return res;
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
void* Fibo_fibo(struct Fibo* this, int n);
struct Fibo {
  void* (**vtable)();
};
void* (*Fibo_vtable[])() = { Fibo_fibo };
void* Fibo_fibo(struct Fibo* this, int n) {
  int res;
  res++;
  res = 0;
  if ((n < 2)) {
    res = n;
  }
  else {
    res = (({ struct Fibo* tmp1 = this; (int) tmp1->vtable[0](tmp1, (n - 2)); }) + ({ struct Fibo* tmp1 = this; (int) tmp1->vtable[0](tmp1, (n - 1)); }));
  }
  return (void*)(res);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  printf("%d\n", ({ struct Fibo* tmp1 = ({ struct Fibo* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Fibo_vtable; res; }); (int) tmp1->vtable[0](tmp1, 10); }));
  tgc_stop(&gc);

  return 0;
}
