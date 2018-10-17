// 二维数组指针

#include <stdio.h>

int main()
{
  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  printf("%ld\n", sizeof(arr));
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  }
  int(*p)[4] = arr;
  printf("%d\n", sizeof(*(p + 1)));
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%2d ", *(*(p + i) +j));
    }
    printf("\n");
  }

  // for (int i = 0; i < 12; i++)
  // {
  //   printf("%#X ", arr + i);
  //   printf("%d ", *(arr + i));
  // }
  return 0;
}