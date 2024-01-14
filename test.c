//数据的存储-learning
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
//		Sleep(100);//单位毫秒
//	}
//	return 0;
//}//程序会陷入死循环

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
	printf("n的值为：%d\n", n);
	printf("pFloat的值为：%lf\n", pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("pFloat的值为：%d\n", *pFloat);
	return 0;
}