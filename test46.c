#include<stdio.h>
char* my_strcat(char*dest, const char*src)
{
    char*ret = dest;
    while (*dest != '\0')
    {
        dest++;
    }
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
    char arr[20] = "hello ";
    int ret=my_strcat(arr,"world");
    printf("%s\n", ret);
    return 0;
}