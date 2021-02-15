#include<stdio.h>
char* my_strncat(char*dest, const char*src, size_t num)
{
	char*ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (num--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr1[20] = "To be ";
	char arr2[] = "or not to be";
	char*ret=my_strncat(arr1,arr2,6);
	printf("%s\n", ret);
	return 0;
}