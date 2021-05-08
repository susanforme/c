#include <stdio.h>
#define MSG "我是一个记号字符串常量."
#define MAXLENGTH 120

int main(void)
{
  // "我是一个字符串在数组之中."字符串字面量,也叫字符串常量
  char words[MAXLENGTH] = "我是一个字符串在数组之中.";
  const char *pt = "指针字符串.";
  // puts函数只显示字符串,会自动在显示的字符串末尾加上换行符
  puts("这里有一些字符串:");
  puts(MSG);
  puts(words);
  puts(pt);
  words[8] = 't';
  puts(words);

  return 0;
}