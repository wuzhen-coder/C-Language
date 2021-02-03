#include<stdio.h>
int DigitSum(int num)
{
    if(num>9)
    {
        return DigitSum(num/10)+num%10;
    }
    else
    {
        return num;
    }
}
int main()
{
    unsigned int num=0;
    int ret=0;
    sancf("%d",&num);
    ret=DigitSum(num);
    printf("ret=%d\n",ret);
    return 0;
}