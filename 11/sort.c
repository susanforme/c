#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ' '

// 等价于char *strs[LIM]
void sort(char **strs, int n)
{
  char *temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (strcmp(strs[i], strs[j]) > 0)
      {
        temp = strs[i];
        strs[i] = strs[j];
        strs[j] = temp;
      }
    }
  }
}

int main(void)
{
  char strs[LIM][SIZE];
  char *ptstr[LIM];
  int n = 0;
  while (n < LIM && fgets(strs[n], SIZE, stdin) != NULL && strs[n][0] != HALT)
  {
    ptstr[n] = strs[n];
    n++;
  }
  sort(ptstr, n);
  puts("排序后的输出");
  for (int i = 0; i < n; i++)
  {
    fputs(ptstr[i], stdout);
  }
  return 0;
}