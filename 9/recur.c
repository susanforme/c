#include <stdio.h>

void up_and_down(int a)
{
  printf("等级%d,地址是%p.\n", a, &a);
  if (a < 4)
  {
    up_and_down(a + 1);
  }
  printf("等级%d,地址是%p.\n", a, &a);
}
int main(void)
{
  up_and_down(1);
  return 0;
}