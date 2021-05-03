#include <stdio.h>
#define MONTH 12

int main(void)
{
  // 声明后数组不能修改
  const int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  // int arr[6] = {[4] = 3}; gcc 不支持
  for (int i = 0; i < MONTH; i++)
  {
    printf("%d月有%d天\n", i + 1, days[i]);
    // 指针表示法
    printf("%d月有%d天\n", i + 1, *(days + i));
  }
  return 0;
}