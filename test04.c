#include<stdio.h>
void Swap(int* pa,int* pb)
{
    int tmp=0;
    tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}
int main()
{
    int a=10;
    int b=20;
    printf("a=%d,b=%d\n",a,b);
    //值传递（实参不能修改形参）
    //地址传递（实参可以修改形参）
    Swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;    
}