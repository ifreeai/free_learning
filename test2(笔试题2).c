#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Test
{
	int Num;
	char* pcname;
	short sDate;
	char cha[2];
	short sBa[4];

}* p;
//����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
//��֪�ṹTest�����͵ı�����С��20���ֽ�
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//0x100014
	printf("%p\n", (unsigned long)p + 0x1);//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
	return 0;
}