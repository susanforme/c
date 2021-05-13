#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  double num = atof(argv[1]);
  int pow = atoi(argv[2]);
  if (pow == 0)
  {
    printf("值为%.3lf.\n", 0);
  }
  else
  {
    for (int i = 1; i < pow; i++)
    {
      num *= num;
    }
  }
  printf("值为%.3lf.\n", num);

  return 0;
}