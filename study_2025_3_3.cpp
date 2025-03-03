//初始结构体
#include <stdio.h>

//描述一个学生的属性
//名字，年龄，电话，性别
//struct - 结构体关键字， Stu - 结构体标签 ，struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是全局的结构体变量（尽量少使用全局结构体变量）

typedef struct Stu
{
	//成员变量
	char name[10];
	short age;
	char tele[12];
	char sex[5];
}Stud;

int main()
{
	struct Stu s;//s是局部的结构体变量
	Stu s1;
	Stud s2;
	return 0;
}
