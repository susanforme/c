#include <stdio.h>

void swap(int *u, int *v)
{
  int temp;
  temp = *v;
  *v = *u;
  *u = temp;
}

int main(void)
{
  int a = 3, b = 9;
  // 此处传递是地址
  swap(&a, &b);
  printf("a现在是%d，b现在是%d.\n", a, b);
  return 0;
}