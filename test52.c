#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
void Swap(char*buf1, char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void*base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz-1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for(j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base+j*width, (char*)base +(j+1)* width)>0)
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)* width,width);
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形值的
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}
int cmp_stu_by_age(const void*e1, const void*e2)
{
	//强制类型转换成结构体类型指针
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void*e1, const void*e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用><=来比较，应该用strcmp比较
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}