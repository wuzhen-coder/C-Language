#include<stdio.h>
void FindTwoData(int arr[], int sz)
{
    int data1 = 0;
    int data2 = 0;
    int result=0;
    int flag = 1;
    int i = 0;
    //得到两个出现一次数字的异或结果
    for (i = 0; i < sz; i++)
    {
        result = result^arr[i];//0异或任何数字等于任何数字本身
    }
    while ((result&flag) == 0)//找出这两个数字的不同（1）位
    {
        flag =flag << 1;
    }
    for (i = 0; i < sz; i++)
    {
        if ((arr[i] & flag )== 0)
            data1 = data1^arr[i];
        else
            data2 = data2^arr[i];
    }
    printf("%d %d\n", data1, data2);
}
int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    FindTwoData(arr,sz);
    return 0;
}