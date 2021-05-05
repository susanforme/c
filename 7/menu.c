// 7.12 第八题
#include <stdio.h>
#include <stdbool.h>
#define P1 8.75
#define P2 9.33
#define P3 10.00
#define P4 11.20

void line(void);
double getSalary(double time_salary);
int main(void)
{
  int n;
  bool status = true;
  while (status)
  {
    line();
    printf("请输入你的工资等级.\n");
    printf("1) %lf/hr   2) %lf/hr\n", P1, P2);
    printf("3) %lf/hr   4) %lf/hr\n", P3, P4);
    printf("5) quit.\n");
    line();
    scanf("%d", &n);
    switch (n)
    {
    case 1:
      status = false;
      getSalary(P1);
      break;
    case 2:
      status = false;
      getSalary(P2);
      break;
    case 3:
      status = false;
      getSalary(P3);
      break;
    case 4:
      status = false;
      getSalary(P4);
      break;
    case 5:
      status = false;
    default:
      printf("输入错误请重新输入。\n");
      break;
    }
  }
  printf("拜拜");
  return 0;
}
void line(void)
{
  const int n = 40;
  for (int i = 0; i < n; i++)
  {
    printf("*");
  }
  printf("\n");
}
double getSalary(double time_salary)
{
  int time;
  double wage;
  printf("请输入你的工作时长。\n");
  scanf("%d", &time);
  wage = time * time_salary;
  printf("薪水是%lf。\n", wage);
  return wage;
}