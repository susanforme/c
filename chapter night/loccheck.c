#include <stdio.h>

void mikado(int num)
{
  int a = 2;
  printf("%d的地址为%p.\n", a, &a);
  printf("%d的地址为%p.\n", num, &num);
}

int main(void)
{
  int a = 2, num = 5;
  printf("%d的地址为%p.\n", a, &a);
  printf("%d的地址为%p.\n", num, &num);
  mikado(num);
  return 0;
}