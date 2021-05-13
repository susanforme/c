#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void read_char()
{
  char temp;
  int line = 0, word = 0, lower = 0, upper = 0, symbol = 0, num = 0;
  bool inword = false;
  while ((temp = getchar()) != EOF)
  {
    if (temp == '\n')
    {
      line++;
    }
    else if (!isspace(temp) && !inword)
    {
      inword = true;
      word++;
    }
    else if (isspace(temp) && inword)
    {
      inword = false;
    }
    if (islower(temp))
    {
      lower++;
    }
    else if (isupper(temp))
    {
      upper++;
    }
    else if (isalnum(temp))
    {
      num++;
    }
    if (ispunct(temp))
    {
      symbol++;
    }
  }
  printf("一共有%d行,%d个单词,%d个小写字母,%d个大写字母,%d个标点符号,%d个数字.", line, word, lower, upper, symbol, num);
}

int main(void)
{
  read_char();
  return 0;
}