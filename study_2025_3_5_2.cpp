//顺序表的动态存储以及动态分配空间
#include <stdio.h>
#include <stdlib.h>
#define InitSize 10
typedef struct
{
	int* data;
	int length;
	int MaxSize;
}SeqList;

void InitList(SeqList* l)
{
	l->data = (int*)malloc(sizeof(int)*InitSize);
	l->length = 0;
	l->MaxSize = InitSize;
}

void IncreaseSize(SeqList* l, int len)
{
	int* p = l->data;
	l->data = (int*)malloc(len + sizeof(int) * InitSize);
	for (int i = 0; i < l->length; i++)
	{
		l->data[i] = p[i];
	}
	l->MaxSize = l->MaxSize + len;
	free(p);
}

int main()
{
	SeqList l = {};
	InitList(&l);
	IncreaseSize(&l, 10);
	return 0;
}