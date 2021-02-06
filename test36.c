#include<stdio.h>
int main()
{
    int arr[]={1,3,3,1,4,6,4,5,5};
    int i=0;
    int ret=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        //异或（相同为0，相异为1）
        //当一个0的二进制与成对的一个数异或会变为0
        //0异或一个数等于这个数本身
         ret=ret^arr[i];
    }
    printf("出现一次的数是：%d\n", ret); 
    return 0;
}