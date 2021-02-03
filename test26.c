#include<stdio.h>
#include<string.h>
void reverse_string1(char * string)
{
    int left=0;
    int right=strlen(string)-1;
    int tmp=0;
    while(left<right)
    {
        tmp=*(string+left);
        *(string+left)=*(string+right);
        *(string+right)=tmp;
        left++;
        right--;
    }
}
void reverse_string2(char * string)
{
    int sz=strlen(string);
    char tmp=*(string);
    *(string)=*(string+sz-1);
    *(string+sz-1)='\0';
    if(strlen(string+1)>=2)
        reverse_string2(string+1);
    *(string+sz-1)=tmp;
}
int main()
{
    char arr[]="abcdef";
    reverse_string1(arr);
    printf("%s\n",arr);
    reverse_string1(arr);
    printf("%s\n",arr);
    return 0;
}