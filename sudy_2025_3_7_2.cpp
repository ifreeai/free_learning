//单链表的定义
#include <stdio.h>
#include <stdlib.h>


typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;

bool InitList(LinkList& l)//带头结点
{
	l = (LNode*)malloc(sizeof(LNode));
	l->next = NULL;
	return true;
}

bool InitList(LinkList & l)//不带头结点
{
	l = NULL;
	return true;
}

int main()
{
	LinkList l;
	InitList(l);
	return 0;
}