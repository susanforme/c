#include <stdio.h>
#include <ctype.h>

void first();
void second();
void third();
void forth();
void fifth();
void sixth();
void seventh();

int main(void)
{
  forth();
  return 0;
}
void first()
{
  char ch;
  int space_count = 0, line_count = 0, other_count = 0;
  while ((ch = getchar()) != '#')
  {
    if (ch == ' ')
    {
      space_count++;
    }
    else if (ch == '\n')
    {
      line_count++;
    }
    else
    {
      other_count++;
    }
  }
  printf("空格数量为%d，行数为%d，其他字符数量为%d。\n", space_count, line_count, other_count);
}
void second()
{
  char ch;
  int count = 0;
  while ((ch = getchar()) != '#')
  {
    if (!isspace(ch))
    {
      if (count >= 8)
      {
        printf("\n");
        count = 0;
      }
      printf("字符%c-ASCII码%4d .", ch, ch);
      count++;
    }
  }
}
void third()
{
  int num;
  int odd_count = 0, even_count = 0;
  double odd_total = 0, even_total = 0;
  do
  {
    printf("请输入数字（输入0结束）.\n");
    scanf("%d", &num);
    if (!num)
    {
      continue;
    }
    if (num % 2 == 0)
    {
      even_count++;
      even_total += num;
    }
    else
    {
      odd_count++;
      odd_total += num;
    }
  } while (num != 0);
  printf("奇数个数为%d，平均数为%.2lf。偶数个数为%d，平均数为%.2lf。\n", odd_count, odd_total / odd_count, even_count, even_total / even_count);
}
// 这是课后习题第七个
void forth()
{
  const double SALARY = 10.00;
  const int OVERTIME = 40;
  const int TIME_RATE = 1.5;
  int week_time;
  double wage, taxes, net_income, wage_time;
  printf("输入你的周工作时长。\n");
  scanf("%d", &week_time);
  wage_time = week_time > 40 ? (week_time - 40) * TIME_RATE + 40 : week_time;
  net_income = wage_time * SALARY;
  if (net_income < 300)
  {
    taxes = net_income * 0.15;
  }
  else if (net_income < 450)
  {
    taxes = 300 * 0.15 + (net_income - 300) * 0.2;
  }
  else
  {
    taxes = 300 * 0.15 + 150 * 0.2 + (net_income - 300 - 150) * 0.25;
  }
  printf("工资总额为%lf，税金为%lf，净收入为%lf。\n", net_income, taxes, net_income - taxes);
}
