#include <stdio.h> 

int main(int argc, char *argv[])
{ 
    /* 我的第一个 C 程序 */ 
    printf("int:%lu\n",sizeof(int)); 
    printf("double:%lu\n",sizeof(double));
    printf("float:%lu\n",sizeof(float));
    printf("float max:%E\n",__FLT_MAX__);
    return 0;
}  