//指针数组的学习
#include <stdio.h>

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for(j = 0; j < 5;j++ )
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}