#include <stdio.h>
#define STLEN 14

int main(void)
{
  char words[STLEN];
  // 输入apple pie\n,读入的大小为STLEN-1
  fgets(words, STLEN, stdin);
  printf("puts和fputs的输出.\n");
  // 此处会打印两个空行,因为fgets输出到了换行符,打印的是apple pie\n\0\n
  puts(words);
  // 打印的是apple pie\n\0
  fputs(words, stdout);
  puts("输入另一个字符");
  //strawberry i love it\n
  fgets(words, STLEN, stdin);
  printf("第二次输出的不同.\n");
  // strawberry\0\n
  puts(words);
  // strawberry\0
  fputs(words, stdout);
  return 0;
}