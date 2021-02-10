//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以喝多少汽水。
#include<stdio.h>
int main()
{
    int money = 20;
    int total = 0;
    int empty = 0;
    scanf("%d", &money);
    total = money;
    empty = money;
    while (empty >= 2)
    {
        total = total + empty/2;
        empty = empty / 2 + empty % 2;
    }
    printf("total=%d\n", total);
    return 0;
}