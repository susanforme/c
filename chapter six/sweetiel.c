#include <stdio.h>
#define NUMBER 22
void forSome(void);
int main(void)
{
  int value = 0;
  while (value < NUMBER)
  {
    printf("value is %d.\n", value);
    value++;
  }
  forSome();
  return 0;
}
void forSome(void)
{
  printf("for \n");
  for (int count = 0; count < NUMBER; count++)
  {
    printf("value is %d\n", count);
  }
}