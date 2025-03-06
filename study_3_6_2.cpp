//顺序表的基本操作--插入
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

// 插入元素到顺序表
bool ListInsert(SqList* s, int i, int e) {
    // 检查插入位置是否合法
    if (i < 1 || i > s->length + 1) {
        printf("插入位置不合法！\n");
        return false;
    }
    // 检查顺序表是否已满
    if (s->length >= MaxSize) {
        printf("顺序表已满，无法插入！\n");
        return false;
    }
    // 元素后移，为插入位置腾出空间
    for (int j = s->length; j >= i; j--) {
        s->data[j] = s->data[j - 1];
    }
    // 插入新元素
    s->data[i - 1] = e;
    // 顺序表长度增加
    s->length++;
    return true;
}

// 打印顺序表中的所有元素
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
	ListInsert(&s, 1, 10); // 在位置1插入10
	ListInsert(&s, 2, 20); // 在位置2插入20
	ListInsert(&s, 1, 5);  // 在位置1插入5
	ListInsert(&s, 3, 15); // 在位置3插入15
    ListInsert(&s, 5, 25);
    PrintList(&s);
	return 0;
}