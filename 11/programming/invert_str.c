#include <string.h>
#include <stdio.h>
void invert_str(char *str)
{
  char temp;
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++)
  {
    temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}

int main(void)
{
  char str[60] = "sweet,i love you.";
  invert_str(str);
  puts(str);
  return 0;
}