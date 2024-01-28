#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//常量字符串，不可修改
//	printf("%d\n", sizeof(p));//4或8--计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));//4或8--p+1得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1--*p就是字符串的第一个字符a
//	printf("%d\n", sizeof(p[0]));//1-- arr[0] == *(arr+0), p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));//4或8--地址
//	printf("%d\n", sizeof(&p + 1));//4或8--地址
//	printf("%d\n", sizeof(&p[0] + 1));//4或8--地址
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名，
	                             //sizeof(arr[0])把数组名单独放在sizeof（）内，计算的是第一行的大小4或8
	printf("%d\n", sizeof(a[0] + 1));//4或8--第一行第二个元素地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a+1));//4或8
	printf("%d\n", sizeof(*(a+1)));//16
	printf("%d\n", sizeof(&a[0]+1));//4或8--第二行地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16--计算第二行的大小，单位是字节
	printf("%d\n", sizeof(*a));//16--a是首元素地址-第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
	printf("%d\n", sizeof(a[3]));// 16
		return 0;

}