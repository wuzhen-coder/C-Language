//在32位机器上25这个值包含下列各位： 
//00000000000000000000000000011001 
//翻转后：（2550136832） 
//10011000000000000000000000000000 
//程序结果返回： 
//2550136832 
//将value的二进制值从右至左依次从左至右赋给另一个数
#include<stdio.h>
int reverse_bit(unsigned int value)
{
    int a = 0;
    int b = 0;
    int i = 1;
    for (i=1; i <= 31; i++)
    {
        a = value & 1; //取value的最后一位
        value = value >> 1; //value的数值右移，取前一位
        b = a | b;//将a(value)的最后一位赋给b
        b = b << 1;//b左移一位，空出最后一位给value的最后一位
    }
    return b;
}
int main()
{
    printf("%u\n", reverse_bit(25));
    return 0;
}