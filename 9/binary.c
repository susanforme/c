// 进制转换
#include <stdio.h>
#define NUM_TO_CHAR 48
// 将10进制的数字num转换为sys进制,非递归法
void sys_convert(int sys, int num)
{
  int n = num, result[100], i = 0;
  while (n > 0)
  {
    result[i] = n % sys + NUM_TO_CHAR;
    n = n / sys;
    i++;
  }
  for (int k = i; k >= 0; k--)
  {
    putchar(result[k]);
  }
  putchar('\n');
}

// 将10进制的数字num转换为sys进制,递归法
void sys_convert2(int sys, int num)
{
  int r;
  r = num % sys;
  if (num > sys)
  {
    sys_convert2(sys, num / sys);
  }
  putchar(r + NUM_TO_CHAR);
}

int main(void)
{
  sys_convert2(8, 99);
  return 0;
}