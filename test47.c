#include<stdio.h>
char* my_strstr(char *dest,char* src)
{
    char*s1=dest ;
    char*s2=src;
    char*buf=dest ;
    while (*buf != '\0')//记录当前位置
    {
        //不能改变dest、src位置
        s1 = buf;
        s2 = src;
        while ((*s1 != '\0')&&(*s1 != '\0')&&(*s1 == *s2))
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return buf;
        }
        buf++;
    }
    return NULL;
}
int main()
{
    char arr[] = "abbbcdef";
    char* ret=my_strstr(arr, "bbc");
    printf("%s\n", ret);
    return 0;
}