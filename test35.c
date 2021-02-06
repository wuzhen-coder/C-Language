#include <stdio.h>
int average1(int m,int n)
{
    return (m + n) >> 1;
}
int average2(int m, int n)
{
    return (m & n) + ((m ^ n) >> 1);
}
int average3(int m,int n)
{
    return m + ((n - m) >> 1);
}
int main()
{
    int m = 0,n = 0;
    printf("请输入两个数：");
    scanf("%d %d", &m, &n);
    printf("平均数为：%d\n", average1(m,n));
    printf("平均数为：%d\n", average2(m,n));
    printf("平均数为：%d\n", average3(m,n));
    return 0;
}