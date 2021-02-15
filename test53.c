#include<stdio.h>
char* my_strncpy(char *dest,const char*src, size_t num)
{
	char*ret = dest;
	while (num--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char arr[10] = { 0 };
	char*ret=my_strncpy(arr,"abcdef",3);
	printf("%s\n", ret);
	return 0;
}