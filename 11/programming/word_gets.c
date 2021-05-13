#include <stdio.h>
#include <ctype.h>
#define SIZE 60

void word_gets(char *str, int n)
{
  int count = 0;
  char temp;
  while (((temp = getchar()) != '\n') && count < n)
  {
    if (!isspace(temp))
    {
      str[count] = temp;
      count++;
    }
  }
}
int main(void)
{
  char words[SIZE];
  word_gets(words, SIZE);
  puts(words);
  return 0;
}