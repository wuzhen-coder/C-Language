#include<stdio.h>
int Fib1(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return Fib1(n-1)+Fib1(n-2);
}
int Fib2(int n)
{
    int a=1;
    int b=1;
    int c=1;//初始化c==1
    while(n>2)
    {
        c=a+b;//先赋值给c
        a=b;
        b=c;
        n--;
    }
    return c;
}
int main()
{
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret=Fib1(n);
	printf("%d\n",ret);
    ret=Fib2(n);
    printf("%d\n",ret);
    return 0;
}