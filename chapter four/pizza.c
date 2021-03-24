#include <stdio.h>
#define PI 3.1415f
int main(void)
{
  float pizza;
  printf("what is the radius of your pizza?\n");
  scanf("%f", &pizza);
  printf("your pizza parameters are %.2f", pizza * pizza * PI);
  return 0;
}