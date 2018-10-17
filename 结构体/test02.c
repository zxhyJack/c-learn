// 结构体数组
#include <stdio.h>

struct student
{
  char *name;
  int num;
  int age;
  float score;
};

struct stu{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组 
    float score;  //成绩
}class[5] = {
    {"Li ping", 5, 18, 'C', 145.0},
    {"Zhang ping", 4, 19, 'A', 130.5},
    {"He fang", 1, 18, 'A', 148.5},
    {"Cheng ling", 2, 17, 'F', 139.0},
    {"Wang ming", 3, 17, 'B', 144.5}
};

int main()
{
  struct student group[2];
  group[0].name = "zhangsan";
  group[0].num = 1001;
  group[0].age = 18;
  group[0].score = 80;
  group[1].name = "lisi";
  group[1].num = 1002;
  group[1].age = 120;
  group[1].score = 90;
  group[2].name = "wangwu";
  group[2].num = 1003;
  group[2].age = 19;
  group[2].score = 60;

  for (int i = 0; i < 3; i++)
  {
    printf("name:%s,num:%d,age:%d,score:%.lf\n", group[i].name, group[i].num, group[i].age, group[i].score);
  }

  for(int i = 0;i<5;i++){
    printf("name:%s,num:%d,age:%d,score:%.lf\n", class[i].name, class[i].num, class[i].age, class[i].score);

  }
  return 0;
}