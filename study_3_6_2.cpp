//˳���Ļ�������--����
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 20

typedef struct
{
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList *s)
{
	s->length = 0;
}

// ����Ԫ�ص�˳���
bool ListInsert(SqList* s, int i, int e) {
    // ������λ���Ƿ�Ϸ�
    if (i < 1 || i > s->length + 1) {
        printf("����λ�ò��Ϸ���\n");
        return false;
    }
    // ���˳����Ƿ�����
    if (s->length >= MaxSize) {
        printf("˳����������޷����룡\n");
        return false;
    }
    // Ԫ�غ��ƣ�Ϊ����λ���ڳ��ռ�
    for (int j = s->length; j >= i; j--) {
        s->data[j] = s->data[j - 1];
    }
    // ������Ԫ��
    s->data[i - 1] = e;
    // ˳���������
    s->length++;
    return true;
}

// ��ӡ˳����е�����Ԫ��
void PrintList(SqList* s) {
    for (int i = 0; i < s->length; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}


int main()
{
	SqList s = {};
	InitList(&s);
	ListInsert(&s, 1, 10); // ��λ��1����10
	ListInsert(&s, 2, 20); // ��λ��2����20
	ListInsert(&s, 1, 5);  // ��λ��1����5
	ListInsert(&s, 3, 15); // ��λ��3����15
    ListInsert(&s, 5, 25);
    PrintList(&s);
	return 0;
}