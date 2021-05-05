#include <stdio.h>

void smile(void)
{
  printf("Smile!");
}
int main(void)
{
  int num = 3;
  while (num > 0)
  {
    for (int i = 0; i < num; i++)
    {
      smile();
    }
    printf("\n");
    num--;
  }
}