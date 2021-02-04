#include<stdio.h>
int my_strlen1(char* str)
{
    int count=0;
   while(*str!='\0')
   {
        count++;
        str++;
    }
    return count;
}
int my_strlen2(char* str)
{
    if(*str!='\0')
        return 1+my_strlen2(str+1);
    else
        return 0;
}
int main()
{
    char arr[]="bit";
    int len=my_strlen1(arr);
    printf("%d\n",len);
    len=my_strlen2(arr);
    printf("%d\n",len);
    return 0;
}