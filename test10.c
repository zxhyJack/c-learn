// 函数指针
#include <stdio.h>

int max(int a, int b)
{
  return a > b ? a : b;
}

int main()
{
  int x, y, maxValue;
  int (*pmax)(int, int) = max;
  printf("input two numbers:");
  scanf("%d %d", &x, &y);
  maxValue = (*pmax)(x, y);
  printf("max value is:%d\n", maxValue);
}
