#include <stdio.h>
int main()
{
  int a = 100, b = 50;
  int *pa, *pb;
  pa = &a;
  pb = &b;
  printf("a = %d, b = %d\n", a, b);
  printf("a = %d, b = %d\n", *pa, *pb);
  printf("pa = %#X, pb = %#X\n", pa, pb);
  int tmp;
  tmp = *pa;
  *pa = *pb;
  *pb = tmp;
  printf("a = %d, b = %d\n", a, b);
  for (int i = 0; i < 6; i++)
  {
    printf("%#X\n", (&tmp+i));
  }

  return 0;
}