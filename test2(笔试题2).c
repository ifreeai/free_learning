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
//假设p的值为0x100000，如下表达式的值分别为多少？
//已知结构Test体类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//0x100014
	printf("%p\n", (unsigned long)p + 0x1);//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
	return 0;
}