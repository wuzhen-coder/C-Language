#include<stdio.h>
#include<math.h>
int main()
{
    int i=0;
    int j=0;
    int count=0;
    for(i=101;i<=200;i+=2)
    {
        for(j=2;j<sqrt(i);j++)//12=2*6=3*4=4*6*2
        {
            if(i%j==0)//代表可以整除
                break;
        }
		if(j>sqrt(i))
		{
			printf("%d ",i);//放在循环之后
			count++;
		}
    }
	printf("\ncount=%d\n",count);
    return 0;
}