#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//阿里笔试题
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}
//结果为：at
