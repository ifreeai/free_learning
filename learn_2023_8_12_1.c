#define _CRT_SECURE_NO_WARNINGS 1
//������ѧϰ

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] =  "���ĳ���";
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


//void Swap(int* x, int* y)//void��ʾû�з���ֵ
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
//дһ���Զ��庯����ӡ��100��200�е�����
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

//дһ�������ж�1000��2000��֮�������
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


//дһ��������ʵ��һ��������������Ķ��ֲ���
//���ֲ���ָ��һ�����������в���ĳ����
//����ҵ��˾ͷ�����������±꣬�Ҳ����ķ���-1
//�������մ˴���          
int binary_search(int arr[], int k,int sz)  //������arr��һ��ָ��
{
	
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
	int ret = binary_search(arr, k,sz);//��ret���պ����ķ���ֵ
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}
