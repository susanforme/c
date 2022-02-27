#include <stdio.h>
int main(void)
{
  // 一字节8位
  printf("Type int has a size of %zd bytes.\n", sizeof(int));
  printf("Type short has a size of %zd bytes.\n", sizeof(short));
  printf("Type double has a size of %zd bytes.\n", sizeof(double));
  printf("Type float has a size of %zd bytes.\n", sizeof(float));
  printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
  return 0;
}