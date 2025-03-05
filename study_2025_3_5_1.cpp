//顺序表--动态存储
#include <stdio.h>
#include <stdlib.h>
#define InitSize 10//表长度的初始定义
typedef struct
{
	int* data;//指示动态分配的指针
	int MaxSize;
	int	length;
}SeqList;

void InitList(SeqList s)
{
	s.data = (int*)malloc(sizeof(int) * InitSize);
	s.length = 0;
	s.MaxSize = InitSize;
}

void IncreaseSize(SeqList s, int len)
{
	int* p = s.data;
	s.data = (int*)malloc((s.MaxSize + len) * sizeof(int));
	for (int i = 0; i < s.length; i++)
	{
		s.data[i] = p[i];//将数据复制到新区域
	}
	s.MaxSize = s.MaxSize + len;//顺序表最大长度增加len
	free(p);//释放空间
}

int main()
{
	SeqList s = {};
	InitList(s);
	IncreaseSize(s, 10);
	return 0;
}