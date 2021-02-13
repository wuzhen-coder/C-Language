#include<stdio.h>
void* my_memmove(void*dest,const void*src, size_t count)
{
    char*ret = dest;
    if (dest > src)//从后往前拷贝
    {
        while (count--)//count在变化
        {
            *((char*)dest + count)=*((char*)src + count);
        }
    }
    else//dest<src 从前向后拷贝
    {
        while (count--)
        {
            *(char*)dest = *(char*)src;
            ++(char*)dest;
            ++(char*)src;
        }
    }
    return ret;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    my_memmove(arr+2, arr, 16);//内存重叠
    return 0;
}