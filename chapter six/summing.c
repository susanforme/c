#include <stdio.h>

int main(void)
{
  int i_value;
  int sum = 0, status;
  // _Bool status; gcc不可用
  printf("please next value!(q to quit!)\n");
  // 返回值为成功读入参数数量。
  status = scanf("%d", &i_value);
  while (status)
  {
    sum += i_value;
    printf("please next value!(q to quit!)\n");
    status = scanf("%d", &i_value);
  }
  printf("sum is %d!.\n", sum);
  return 0;
}