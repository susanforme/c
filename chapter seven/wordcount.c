#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '|'

int main(void)
{
  char ch;
  int word_count = 0, line_count = 0, char_count = 0;
  while ((ch = getchar()) != STOP)
  {
    char_count++;
    if (ch == '\n')
    {
      line_count++;
    }
    if (ch == ' ')
    {
      word_count++;
    }
  }
  printf("一共有%d行， %d个单词， %d个字符。\n", line_count, word_count, char_count);
  return 0;
}