/*
class Switch {
  public static void main(String[] args) {
    System.out.println(new SwitchClass().s());
  }
}
class SwitchClass {
  public int s() {
    int x;
    x = 5;
    switch(x){ 
      case 4: 
        x = 4; break;
      case 5: 
        x++; break;
      x = 0;
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
struct SwitchClass;
void* SwitchClass_s(struct SwitchClass* this);
struct SwitchClass {
  void* (**vtable)();
};
void* (*SwitchClass_vtable[])() = { SwitchClass_s };
void* SwitchClass_s(struct SwitchClass* this) {
  int x;
  x = 5;
  switch(x){ 
    case 4: 
      x = 4;
      break;
    case 5: 
      x++;
      break; 
    default: 
      x = 0;
  }
  return (void*)(x);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  printf("%d\n", ({ struct SwitchClass* tmp1 = ({ struct SwitchClass* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = SwitchClass_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  tgc_stop(&gc);

  return 0;
}
