//��ʼ�ṹ��
#include <stdio.h>

//����һ��ѧ��������
//���֣����䣬�绰���Ա�
//struct - �ṹ��ؼ��֣� Stu - �ṹ���ǩ ��struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3��ȫ�ֵĽṹ�������������ʹ��ȫ�ֽṹ�������

typedef struct Stu
{
	//��Ա����
	char name[10];
	short age;
	char tele[12];
	char sex[5];
}Stud;

int main()
{
	struct Stu s;//s�Ǿֲ��Ľṹ�����
	Stu s1;
	Stud s2;
	return 0;
}