#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  // printf("%d\n",sizeof(arr));
  // printf("%d\n",sizeof(int));
  int *p = arr;
  // printf("%d\n", *p+6 );
  for (int i = 0; i < 20; i++)
  {
    printf("%d\n", *p++);
  }

  return 0;
}