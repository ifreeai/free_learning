#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system-ִ��ϵͳ����
	again:
	printf("��ע�⣬���ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ�����strcmp()
	{
		printf("����ȡ���ػ�\n");
		system("shutdown -a");
	}
	else {
		goto again;
	}
		return 0;
}













