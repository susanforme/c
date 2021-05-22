#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double *ptd;
  int max;
  int number;
  int i = 0;
  puts("输入一个数组大小.");
  if (scanf("%d", &max) != 1)
  {
    puts("数字输入不正确,拜拜!");
    exit(EXIT_FAILURE);
  }
  ptd = (double *)malloc(max * sizeof(double));
  if (ptd == NULL)
  {
    puts("内存分配失败.");
    exit(EXIT_FAILURE);
  }
  puts("输入值,按q关闭.");
  while (i < max && scanf("%lf", &ptd[i]) == 1)
  {
    i++;
  }
  printf("有%d个实体.\n", number = i);
  for (i = 0; i < number; i++)
  {
    printf("%7.2f", ptd[i]);
    if (i % 7 == 6)
    {
      putchar('\n');
    }
  }
  if (i % 7 != 0)
  {
    putchar('\n');
  }
  puts("done!");
  free(ptd);

  return 0;
}