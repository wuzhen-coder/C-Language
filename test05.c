#include<stdio.h>
int main()
{
    int a=3;
    int b=5;
    //a=a+b b=a-b a=a-b
    //加减法会导致溢出
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}