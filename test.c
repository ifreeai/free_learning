//���ݵĴ洢-learning
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);//��λ����
//	}
//	return 0;
//}//�����������ѭ��

//int main()
//{
//	char a [1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello word\n");
//	}
//	return 0;
//}

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("pFloat��ֵΪ��%lf\n", pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("pFloat��ֵΪ��%d\n", *pFloat);
	return 0;
}