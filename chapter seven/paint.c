#include <stdio.h>

int max(int a, int b);
int main(void)
{
  printf("max is %d.\n", max(33, 22));
  return 0;
}
int max(int a, int b)
{
  return a > b ? a : b;
}