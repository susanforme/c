#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  unsigned long num, div;
  bool isPrime;
  printf("请输入一个整数(按q关闭).\n");
  while (scanf("%ul", &num) == 1)
  {
    for (div = 2, isPrime = true; (div * div) <= num; div++)
    {
      if (num % div == 0)
      {
        if (div * div != num)
        {
          printf("%lu能被%lu和%lu整除.\n", num, div, num / div);
        }
        else
        {
          printf("%lu被%lu整除.\n", num, div);
        }
        isPrime = false;
      }
    }
    if (isPrime)
    {
      printf("%lu是素数.\n", num);
    }
  }
  return 0;
}