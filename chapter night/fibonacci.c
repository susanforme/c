#include <stdio.h>

unsigned long fibonacci(int num)
{
  return num > 2 ? fibonacci(num - 1) + fibonacci(num - 2) : 1;
}

int main(void)
{
  printf("此时的斐波那契数为%lu", fibonacci(7));
  return 0;
}