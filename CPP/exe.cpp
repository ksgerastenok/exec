#include <stdio.h>
#include <alloc.h>

void main() {
  //void (far* p)();
  void* p;
  FILE* f;
  p = malloc(0x50);
  f = fopen("c:\\programs\\work\\ati.dll", "r");
  fseek(f, 0x40, SEEK_CUR);
  fread(p, 0x50, 1, f);
  fclose(f);
  //asm {
  //  call dword ptr p
  //}
  ((void (far*) ())p)();
  printf("Exit!\n");
}
