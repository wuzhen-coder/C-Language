#include<stdio.h>
int main()
{
    int i=0;
    //确定打印9行
    for(i=1;i<=9;i++)
    {
        //打印1行
        int j=1;
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d ",i,j,i*j);//左对齐
        }
        printf("\n");
    }
    return 0;
}