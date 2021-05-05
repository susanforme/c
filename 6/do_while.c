// do while
#include <stdio.h>
#define PASS_WORD 10
int main(void)
{
  int some_value;
  do
  {
    printf("please enter password!\n");
    scanf("%d", &some_value);
  } while (some_value != PASS_WORD);
  printf("bingo!you are right!\n");
  return 0;
}