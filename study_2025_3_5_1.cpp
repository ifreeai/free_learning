//˳���--��̬�洢
#include <stdio.h>
#include <stdlib.h>
#define InitSize 10//���ȵĳ�ʼ����
typedef struct
{
	int* data;//ָʾ��̬�����ָ��
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
		s.data[i] = p[i];//�����ݸ��Ƶ�������
	}
	s.MaxSize = s.MaxSize + len;//˳�����󳤶�����len
	free(p);//�ͷſռ�
}

int main()
{
	SeqList s = {};
	InitList(s);
	IncreaseSize(s, 10);
	return 0;
}