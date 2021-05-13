// 从输入中获取字符,结果存储在数组
#include <stdio.h>
#define LIM 5
#define SIZE 60

void m_gets(char (*str)[SIZE], int n)
{
  int count = 0;
  while (count < n)
  {
    int i = 0;
    while ((str[count][i] = getchar()) != '\n' && i < SIZE)
    {
      i++;
    }
    count++;
  }
}

int main(void)
{
  char arr[LIM][SIZE];
  m_gets(arr, LIM);
  puts("获得的值为:");
  for (int i = 0; i < LIM; i++)
  {
    fputs(arr[i], stdout);
  }
}