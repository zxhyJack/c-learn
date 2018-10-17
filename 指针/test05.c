// 二级指针

#include<stdio.h>

int main()
{
  int a = 10;
  int *p = &a;
  int **pp = &p;
  printf("%#X\n",p);
  printf("%d\n",**pp);
  return 0;
}