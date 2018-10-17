// 字符串指针
#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "hello world";
  char *p = str;
  // printf("%s\n", str);
  for (int i = 0; i < strlen(str); i++)
  {
    printf("%c", *(str + i));
  }
  printf("\n");
  for (int i = 0; i < strlen(str); i++)
  {
    printf("%c", *(p + i));
  }
  printf("\n");
  for (int i = 0; i < strlen(str); i++)
  {
    printf("%c", p[i]);
  }
  printf("\n");

  char *str1 = "Hello World!";
  str1 = "I love C!"; //正确
  // str1[3] = 'P';      //错误
  str[3] = 'o';
  printf("%s\n", str);
  gets(str);
  printf("%s\n", str);
  return 0;
}