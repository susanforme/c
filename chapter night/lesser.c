#include <stdio.h>

// 函数原型声明,可以只写类型不写变量名
int compare(int a, int);
int main(void)
{
  int num1, num2;
  printf("请输入1个数字。\n");
  scanf("%d", &num1);
  printf("请再输入1个数字。\n");
  scanf("%d", &num2);
  printf("更小的数字是%d。\n", compare(num1, num2));
  return 0;
}
int compare(int a, int b)
{
  return a < b ? a : b;
}
