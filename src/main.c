#include <stdio.h>
#ifndef TOOLCHAIN
#define TOOLCHAIN "default toolchain"
#endif
int main() {
  printf("toolchain = %s\n", TOOLCHAIN);
  return 0;
}
