#include <stdio.h>

// 3.11 第3题
void ring(void)
{
  printf("\aStartled by the sudden sound, Sally shouted\n");
}
void read_float(void)
{
  float f_a;
  printf("please enter a float value.\n");
  scanf("%f", &f_a);
  printf("float value is %f", f_a);
  printf("e  is %e", f_a);
}
int main(void)
{
  ring();
  read_float();
  return 0;
}
