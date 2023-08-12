#define _CRT_SECURE_NO_WARNINGS 1
//函数的学习

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] =  "开心超人";
//	char hhh[] =  "##########";
//	strcpy(hhh, arr);
//	printf("%s", hhh);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//void Swap(int* x, int* y)//void表示没有返回值
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 88;
//	int b = 66;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//写一个自定义函数打印出100到200中的素数
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int account = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			account++;
//		}
//			
//	}
//	
//	printf("\naccount=%d", account);
//	return 0;
//}

//写一个函数判断1000到2000年之间的闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找
//二分查找指在一个有序数组中查找某个数
//如果找到了就返回这个数的下标，找不到的返回-1
//熟练掌握此代码          
int binary_search(int arr[], int k,int sz)  //本质上arr是一个指针
{
	
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//中间元素的下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
    }
return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);//用ret接收函数的返回值
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}
