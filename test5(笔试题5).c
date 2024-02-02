#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[5][5];
	int(*p)[4];//Êý×éÖ¸Õë
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFFFFFFFFFC,-4
	return 0;                                                   //p[4][2] == *(*(p+4)+2)
}