#include <stdio.h>
#include <string.h>
#define Q "His name is zhang fei!"

// 4.7 第二题c
void printQ(void)
{
  printf("\"%s\" length is %d.\n", Q, strlen(Q));
}
// 4.8 第一题
void logName(void)
{
  char firstName[30], lastName[30];
  printf("please enter your first name and last name.\n");
  scanf("%s %s", firstName, lastName);
  printf("%s,%s.", lastName, firstName);
}
// 4.8 第二题
void logNameAnyWay(void)
{
  char name[50];
  printf("please enter your name.\n");
  scanf("%s", name);
  printf("\"%s\"\n", name);
  printf("\"%20s\"\n", name);
  printf("\"%-20s\"\n", name);
  printf("%*s\n", strlen(name) + 3, name);
}
// 4.8 第三题
void test3(void)
{
  float f_a = 21.290;
  printf("The input is %.1f or %.1e.\n", f_a, f_a);
  printf("The input is %+.3f or %.3e\n", f_a, f_a);
}
void test4(void)
{
  char name[30];
  float height;
  printf("please enter your height and name.\n");
  scanf("%f %s", &height, name);
  printf("%s,you are %.3f centimeter tall!", name, height);
}
int main(void)
{
  return 0;
}