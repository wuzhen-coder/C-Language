#include<stdio.h>
void* my_memcpy(void*dest,const void*src, size_t count)
{
    //void*（接收各种类型）不能解引用操作或者++
    void*ret = dest;
    while (count--)
    {
        *(char*)dest = *(char*)src;
        ++(char*)dest;
        ++(char*)src;
    }
    return ret;
}
int main()
{
    int arr1[20] = { 0 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    my_memcpy(arr1, arr2,20);
    return 0;
}