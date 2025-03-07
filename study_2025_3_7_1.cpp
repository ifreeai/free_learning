//顺序表的插入和删除
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 20

typedef struct
{
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList* l)
{
	l->length = 0;
}

bool ListInsert(SqList* l, int i, int a)
{
	if (i < 1 || i > l->length + 1)
	{
		printf("插入的位置不合法！\n");
		return false;
	}
	if (l->length >= MaxSize)
	{
		printf("顺序表已满，无法插入！\n");
		return false;
	}
	for (int j = l->length; j >= i; j--)
	{
		l->data[j] = l->data[j - 1];
	}
	l->data[i - 1] = a;
	l->length++;
	return true;

}

bool ListDelete(SqList* l, int i,int &e  )
{
	if (i < 1 || i>l->length)
	{
		printf("所选择的删除的位置不合法！\n");
		return false;
	}
	e = l->data[i - 1];
	for (int j = i; j < l->length; j++)
	{
		l->data[j - 1] = l->data[j];
	}
	l->length--;
	return true;
}
void PrintList(SqList *l)
{
	for (int i = 0; i < l->length; i++)
	{
		printf("%d ", l->data[i]);
	}
	printf("\n");
}
int main()
{
	int e = 0;
	SqList l;
	InitList(&l);
	ListInsert(&l, 1, 6);
	ListInsert(&l, 2, 8);
	ListInsert(&l, 3, 10);
	ListInsert(&l, 4, 12);
	PrintList(&l);
	if (ListDelete(&l, 2, e))
	{
		printf("删除的元素是：%d\n", e);
	}
	PrintList(&l);
	return 0;
}