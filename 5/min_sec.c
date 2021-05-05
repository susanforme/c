#include <stdio.h>

int main(void)
{
  int seconds = 1;
  while (seconds > 0)
  {
    printf("please enter seconds.\n");
    scanf("%d", &seconds);
    if (seconds > 0)
    {
      printf("result is %d minutes ,%d seconds.\n", seconds / 60, seconds % 60);
    }
  }
  printf("done!");
  return 0;
}