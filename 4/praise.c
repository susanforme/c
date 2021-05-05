#include <stdio.h>
#include <string.h>
#define PRAISE "you are genius!"

int main(void)
{
  char name[40];
  printf("what is your name!\n");
  scanf("%s", name);
  printf("%s,%s\n", name, PRAISE);
  printf("your name has %d letters occupies %zd memory cells . \n", strlen(name), sizeof(name));
  // 将\0计算到了其中
  printf("the phrase of praise has %d letters and occupies %zd memory cells . \n ", strlen(PRAISE), sizeof(PRAISE));
  return 0;
}