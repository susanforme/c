#include <stdio.h>
#define LEN 10

int find(int *arr, int len)
{
  int n;
  puts("输入一个整数.");
  scanf("%d", &n);
  for (int i = 0; i < len; i++)
  {
    //有序序列可以优化
    if (arr[i] == n)
    {
      return i;
    }
  }
  return -1;
}