#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define WIDTH 60
#define SPACE ' '

void show_n_char(char ch, int count, bool need_line);

int main(void)
{
  char words[30] = "chinese copyright！";
  char wor[30] = "china";
  show_n_char('*', WIDTH, true);
  show_n_char(SPACE, (WIDTH - strlen(words)) / 2, false);
  printf("%s", words);
  show_n_char(SPACE, (WIDTH - strlen(words)) / 2, true);
  show_n_char(SPACE, (WIDTH - strlen(wor)) / 2, false);
  printf("%s", wor);
  show_n_char(SPACE, (WIDTH - strlen(wor)) / 2, true);
  show_n_char('*', WIDTH, true);
  return 0;
}

void show_n_char(char ch, int count, bool need_line)
{
  for (int i = 0; i < count; i++)
  {
    putchar(ch);
  }
  if (need_line)
  {
    putchar('\n');
  }
}
