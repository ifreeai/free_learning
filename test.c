#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����ָ���ѧϰ

//arr-��Ԫ�ص�ַ
//&arr[0]-��Ԫ�ص�ַ
//&arr-���ֵĵ�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int(*p)[10] = &arr;//p��������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//ָ�봫�ε�ѧϰ

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);//һ��ָ��P����
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	return 0;
//}

//����ָ��--��ָ������ָ��--��ź�����ַ��һ��ָ��

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int (*pa)(int, int) = Add;//����ָ��
//	printf("%d\n", (*pa)(a, b));
//	return 0;
//}
//
//
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;//����ָ��
//	(*p)("hello learning");
//	return 0;
//}


//����ָ������

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x,int y)
//	{
//	return x / y;
//	}
//int main()
//{
//	int* arr[5];//ָ������
//	int (*pa)(int, int) = Add;//����ָ��
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5,-1,6,0
//	}
//	return 0;
//}

//����ϰ

//char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ�� pf ���ܹ�ָ��my_strcpy:
//(char*)(*pf)(char*, const char*) = my_strcpy;
//2.дһ������ָ������ pfArr ,�ܹ����4��my_strcpy������ַ:
//(char*)(*pfArr[4])(char*, const char*) = { mystrcpy,mystrcpy ,mystrcpy ,mystrcpy };