//ѭ������ѧϰ2023��8��8��two
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//whileѭ����䣺
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//	}
//		return 0;
//}	


//forѭ����䣺
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//
//	}
//	return 0;
//}


//������ 
//����ѭ�����ٴΣ����ٺ٣�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}

