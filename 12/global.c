#include <stdio.h>

// 外部变量,定义式声明
int units = 0;

void critic(void)
{
  puts("你太倒霉,我的朋友,请你再试一次.");
  scanf("%d", &units);
}
int main(void)
{
  // 可选的重复声明,如果是另一个文件中的变量则必须重复声明,引用式声明
  extern int units;
  scanf("%d", &units);
  while (units != 56)
  {
    critic();
  }
  puts("good lucky!");
  return 0;
}