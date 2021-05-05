#include <stdio.h>
#define time 60

void translate_hour_to_minutes();
void print_more_than_ten();
void translate_day_to_week();
void translate_cm_to_m();
int main(void)
{
  translate_cm_to_m();
  return 0;
}
void translate_hour_to_minutes()
{
  float minute_time, hour;
  int hour_time = 0;
  printf("please input  time!(hour)\n");
  // 不要使用printf 中的修饰符scanf("%2.2f", &hour);
  scanf("%f", &hour);
  while (hour >= 1)
  {
    hour--;
    hour_time++;
  }
  minute_time = hour * 60;
  printf("hour is %d,minute is %.3f.\n", hour_time, minute_time);
}
void print_more_than_ten()
{
  int n, n2;
  printf("please input a number!\n");
  scanf("%d", &n);
  n2 = n + 10;
  while (n2 >= n)
  {
    printf("%d\n", n2--);
  }
}
void translate_day_to_week()
{
  int day, week, day_time;
  printf("please input many days!\n");
  scanf("%d", &day);
  week = day / 7;
  day_time = day % 7;
  printf("day is %d,week is %d\n", day_time, week);
}

void translate_cm_to_m()
{
  int centimeter = 1;
  while (centimeter > 0)
  {
    printf("please input your height!\n");
    scanf("%d", &centimeter);
    if (centimeter > 0)
    {
      printf("your height is %.2f m!\n", (float)centimeter / 100);
    }
    else
    {
      printf("good bye !\n");
    }
  }
}