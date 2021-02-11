#include<stdio.h>
char* my_strcpy(char*dest, const char*src)
{
    char*ret = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = *src;
    return ret;
}
int main()
{
    char arr[20] = { 0 };
    char*ret=my_strcpy(arr, "hello world");
    printf("%s\n", ret);
    return 0;
}