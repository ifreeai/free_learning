//ѭ������ѡ�����Ĵ���ѧϰ  2023��8��8��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//EOF - end of file �ļ�������־
	//{
	//	putchar(ch);
	//}
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//�������룬�������password������
	                      //��������ʣ��һ��'\n'
	                      //��ȡһ��'\n'
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ�Ϸ���\n");
	}
	return 0;
}















