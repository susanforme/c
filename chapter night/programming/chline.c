#include <stdio.h>

void chline(char ch, int i, int j)
{
  for (int k = 0; k < i; k++)
  {
    for (int m = 0; m < j; m++)
    {
      printf("%c", ch);
    }
    printf("\n");
  }
}
