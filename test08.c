#include<stdio.h>
int main()
{
    int m=24;
    int n=18;
    int r=0;
    scanf("%d%d",&m,&n);
    //辗转相除法
    while(r=m%n)//24%18=6
    {
        m=n;//18
        n=r;//6
    }
    printf("%d\n",n);
    return 0;
}