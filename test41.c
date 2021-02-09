#include<stdio.h>
//逆序字符串函数
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
void left_move2(char *arr,int k)
{
     int i=0;
     int len=strlen(arr);
     for(i=0;i<k;i++)
     {
        //左旋转一个字符
        //1
        char tmp=*arr;
        //2
        int j=0;
        for(j=0;j<len-1;j++)
        {
            *(arr+j)=*(arr+j+1);
        }
        //3
        *(arr+len-1)=tmp;
     }   
}
int main()
{
    char arr[]="abcdef";
    left_move(arr,2);
    printf("%s\n",arr);
    return 0;
}