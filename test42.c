#include<stdio.h>
void reverse(char*left,char*right)
{
    while(left<right)
    {
        char tmp=*left;
        *left=*right;
        *right=tmp;
        left++;
        right--;
    }
}
void left_move(char *arr,int k)
{
    int len=strlen(arr);
    reverse(arr,arr+k-1);//逆序左边
    reverse(arr+k,arr+len-1);//逆序右边
    reverse(arr,arr+len-1);//逆序整体
}
int is_left_move(char*s1,char*s2)
{
    int len=strlen(s1);
    int i=0;
    for(i=0;i<len;i++)//字符串旋转次数
    {
        left_move(s1,1);//旋转一次
        int ret=strcmp(s1,s2);
        if(ret==0)
            return 1;
    }
    return 0;
}
int is_left_move02(char*str1,char*str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2)
        return 0;
    //1.在str1字符串中追加一个str1字符串
    strncat(str1,str1,len1);
    //2.判断str2指向的字符串是否是str1指向字符串的子串
    char* ret=strstr(str1,str2);
    if(ret==NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char arr1[]="abcdef";
    char arr2[]="cdefab";
    int ret=is_left_move(arr1,arr2);
    if(ret==1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}