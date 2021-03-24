#include <stdio.h>

// 3.11 第3题
void ring(void)
{
  printf("\aStartled by the sudden sound, Sally shouted\n");
}
// 第四题
void read_float(void)
{
  float f_a;
  printf("please enter a float value.\n");
  scanf("%f", &f_a);
  printf("float value is %f.\n", f_a);
  printf("e  is %e.\n", f_a);
}
// 第五题
void convert_age(void)
{
  unsigned int un_i_age;
  printf("please input your age.\n");
  scanf("%d", &un_i_age);
  printf("your age is converted to %e seconds\n", un_i_age * 3.156e17);
}
int main(void)
{
  ring();
  read_float();
  convert_age();
  return 0;
}
