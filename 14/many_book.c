// 结构数组
#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXUTL 40
// 书籍最大数量
#define MAXBOOKS 100

struct book
{
  char title[MAXTITL];
  char author[MAXUTL];
  float value;
};

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

int main(void)
{
  // book 类型的结构数组
  struct book library[MAXBOOKS];
  int count = 0;
  puts("请输入书籍标题.");
  puts("通过输入回车停止");
  while (count < MAXBOOKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
  {
    puts("现在输入作者");
    s_gets(library[count].author, MAXUTL);
    puts("现在输入价格");
    scanf("%f", &library[count++].value);
    while (getchar() != '\n')
    {
      continue;
    }
    if (count < MAXBOOKS)
    {
      puts("输入下一个标题.");
    }
  }
  if (count > 0)
  {
    puts("这里有一个书籍列表");
    for (int i = 0; i < count; i++)
    {
      printf("%s价格为%f,作者是%s.\n", library[i].title, library[i].value, library[i].author);
    }
  }
  else
  {
    puts("一本书都没有太糟糕了");
  }
  return 0;
}