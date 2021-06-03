#include <stdio.h>
#include <string.h>
// 书名最大长度
#define MAXTITL 41
// 作者姓名最大长度
#define MAXUTL 31
char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;
  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    // 查找换行符
    find = strchr(st, '\n');
    if (find)
    {
      *find = '\0';
    }
  }
  return ret_val;
}
struct book
{
  // 书名
  char title[MAXTITL];
  // 作者
  char author[MAXUTL];
  // 价格
  float value;
};

int main(void)
{
  // 将library声明未book类型的结构体
  struct book library;
  puts("请输入书籍标题");
  // fgets中文输入
  // fgets(library.title, MAXTITL, stdin);
  s_gets(library.title, MAXTITL);
  puts("请输入作者名字");
  // fgets(library.author, MAXUTL, stdin);
  s_gets(library.author, MAXUTL);
  puts("请输入书籍价格");
  scanf("%f", &library.value);
  printf("书籍标题为%s的作者名字是%s,它的价格是%.2f .\n", library.title, library.author, library.value);
  return 0;
}