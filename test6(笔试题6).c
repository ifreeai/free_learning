#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));//*(aa+1)==aa[1]即ptr2指向第二行首元素地址
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}
//输出结果为：10,5