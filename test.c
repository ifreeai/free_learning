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
//	char* p = "abcdef";//�����ַ����������޸�
//	printf("%d\n", sizeof(p));//4��8--����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));//4��8--p+1�õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1--*p�����ַ����ĵ�һ���ַ�a
//	printf("%d\n", sizeof(p[0]));//1-- arr[0] == *(arr+0), p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));//4��8--��ַ
//	printf("%d\n", sizeof(&p + 1));//4��8--��ַ
//	printf("%d\n", sizeof(&p[0] + 1));//4��8--��ַ
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊһά�������������
	                             //sizeof(arr[0])����������������sizeof�����ڣ�������ǵ�һ�еĴ�С4��8
	printf("%d\n", sizeof(a[0] + 1));//4��8--��һ�еڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a+1));//4��8
	printf("%d\n", sizeof(*(a+1)));//16
	printf("%d\n", sizeof(&a[0]+1));//4��8--�ڶ��е�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//16--����ڶ��еĴ�С����λ���ֽ�
	printf("%d\n", sizeof(*a));//16--a����Ԫ�ص�ַ-��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
	printf("%d\n", sizeof(a[3]));// 16
		return 0;

}