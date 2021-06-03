#include <stdio.h>
#define LEN 20

void convert(void)
{
  int n, i = 0;
  int res[LEN];
  puts("请输入一个十进制正整数.");
  scanf("%d", &n);
  while (n != 0)
  {
    res[i] = n % 2;
    n = n / 2;
    i++;
  }
  for (int j = 0; j < i; j++)
  {
    printf("%d", res[j]);
  }
}
int main(void)
{
  convert();
  return 0;
}