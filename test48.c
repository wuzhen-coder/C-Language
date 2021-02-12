#include<stdio.h>
int my_strcmp(const char*str1,const char*str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0')
            return 0;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
int main()
{
    const char*p = "abcdef";
    const char*q = "abcddd";
    int ret = my_strcmp(p, q);
    if (ret < 0)
    {
        printf("p<q\n");
    }
    else if (ret>0)
    {
        printf("p>q\n");
    }
    else
    {
        printf("p=q\n");
    }
    return 0;
}