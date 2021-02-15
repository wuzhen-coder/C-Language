#include<stdio.h>
int my_strncmp(const char*str1,const char*str2, size_t num)
{
	while (num--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}
int main()
{
	const char*p = "abcdef";
	const char*q = "abc";
	int ret=my_strncmp(p, q,5);
	printf("%d\n",ret);
	return 0;
}