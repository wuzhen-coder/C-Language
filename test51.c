#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
void qsort(void* base, size_t num, size_t width,
	int(*cmp) (const void* e1, const void* e2));
int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形值的
	return *(int*)e1- *(int*)e2;
}
void test1()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
}
int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
	//return (int)(*(float*)e1 - *(float*)e2);
}
void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]),cmp_float);
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
	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：函数指针，比较两个元素的函数的地址-这个函数使用者自己实现
	//            函数指针的两个参数是：待比较的两个元素的地址
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}