#include<stdio.h>

extern int a;
extern float b;

int main(){
  int a = 1;
  float b = 1/3.0f;
  printf("a = %d\n",a);
  printf("b = %f\n",b);
  return 0;
}