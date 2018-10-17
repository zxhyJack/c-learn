// 指针作为函数返回值
#include <stdio.h>
#include <string.h>

char *strlong(char str1[], char str2[])
// char *strlong(char *str1, char *str2)
{
  if (strlen(str1) >= strlen(str2))
  {
    return str1;
  }
  else
  {
    return str2;
  }
}

int main()
{
  char str1[30], str2[30];
  gets(str1);
  gets(str2);
  printf("The long string is %s\n", strlong(str1, str2));
}
