#include<stdio.h>
#include<math.h>
int main()
{
    int i=0;
    for(i=0;i<=999;i++)
    {
       //1.计算i的位数  n位数
       int n=1;
       int tmp=i;
       int sum=0;
       while(tmp/=10)//123/10=12 12/10=1 1/10=0
       {
           n++;//n=2 n=3
       }
       //2.计算i的每一位的n次方之和
       tmp=i;
       while(tmp)//123 12 1
       {
           sum+=pow(tmp%10,n);//123%10=3 12%10=2 1%10=1
           tmp/=10;//123/10=12 12/10=1 1/10=0
       }
       //3.比较i == sum
       if(i==sum)
       {
           printf("%d ",i);
       }
    }
    return 0;
}