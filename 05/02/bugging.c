#include <stdio.h>
#include <stdlib.h>

void segfault()
{
    int *p = NULL;
    *p = 100;
}

int main(void)
{
    // segfault();//段错误产生原因1，给一个零地址的指针写入数据

    //段错误产生2：访问越界的内存
    char buf[1]="a";
    buf[10003] = 'A';
    printf("%c\n", buf[1003]);

    return o
}