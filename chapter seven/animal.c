#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  printf("给我一个字母，我给你一个水果.\n");
  while (scanf("%c", &ch) == 1 && ch != '#')
  {
    if (!islower(ch))
    {
      continue;
    }
    switch (ch)
    {
    case 'a':
      printf("apple.\n");
      break;
    case 'b':
      printf("banana.\n");
      break;
    default:
      printf("none!\n");
    }
  }
  printf("bye!\n");
  return 0;
}