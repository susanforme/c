#include <stdio.h>

int main(void)
{
  char ch;
  printf("please end character!\n");
  scanf("%c", &ch);
  printf("The code for %c is %d.\n", ch, ch);
  return 0;
}