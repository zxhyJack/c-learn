// 结构体
#include <stdio.h>

int main(){
  struct student {
    char *name;
    int num;
    int age;
    float score;
  };

  struct student stu1;
  stu1.name = "Jack"; 
  stu1.num = 101;
  stu1.age = 18;
  stu1.score = 99;

  printf("name:%s,num:%d,age:%d,score:%.lf\n",stu1.name,stu1.num,stu1.age,stu1.score);
  return 0;
}