#include <stdio.h>
#include <stdlib.h>
#define LIM 30

int main(void)
{
  char number[LIM];
  char *end;
  long int value;
  puts("请输入一个值,空行为关闭.");
  while (fgets(number, LIM, stdin) && number[0] != '\0')
  {
    value = strtol(number, &end, 8);
    printf("8进制输出为%ld,end为%s , *end为%d.\n", value, end, *end);
  }

  return 0;
}