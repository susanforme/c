#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
  short num = PAGES;
  short mnum = -PAGES;
  // short %h
  printf("%hd,%hu\n", num, num);
  printf("%hd,%hu\n", mnum, mnum);
  printf("%d,%c\n", num, num);
  printf("%d %hd %c\n", WORDS, WORDS, WORDS);
  return 0;
}