#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�򵥼�����
void menu()
{
	printf("*********************\n");
	printf("** 1.Add     2.Sub **\n");
	printf("** 3.Mul     4.Div **\n");
	printf("** 5.Xor     0.Exi **\n");
	printf("*********************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//����ָ�����飨�ص㣩
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("������������������");
			scanf("%d%d", &x, &y);
			int num = pfArr[input](x, y);//����ָ�������Ӧ��
			printf("%d\n", num);
		}
		else if (input == 0)
		{
			printf("�˳�");
		}
		else
		{
			printf("ѡ�����������ѡ��:\n");
		}
	} while(input);
	return 0;
}