#include <stdio.h>

int main(void)
{
  char testChar;
  // 可以这样做，但这不是好的编程习惯,如果系统不能识别ascii吗则会错误
  char grade = 65;
  testChar = 'a';
  // testChar = "a"; 错误，双引号为字符串
  printf("%c，%c，%d", testChar, grade, grade == testChar);
}