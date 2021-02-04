#include<stdio.h>
int main()
{
    int num = 0;
    int count = 0;
    int i = 0;
    printf("输入一个十进制整数：");
    scanf("%d", &num);
    for (i = 0; i < 32; i++)
    {
        if (((num >> i) & 1) == 1)
        {
            count++;
        }
    }
    printf("二进制中1的个数为：%d\n", count);
    return 0;
}