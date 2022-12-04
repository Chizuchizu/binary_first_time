#include <stdio.h>
#include <stdlib.h>

int main() {
  __int32_t *c = (__int32_t *)malloc(sizeof(__int32_t));
  *c = 0x4C414552;
  printf("%s\n", (char * )c);
}
