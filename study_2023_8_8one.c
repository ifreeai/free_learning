//循坏语句和选择语句的代码学习  2023年8月8日
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//EOF - end of file 文件结束标志
	//{
	//	putchar(ch);
	//}
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//输入密码，并存放在password数组中
	                      //缓冲区还剩余一个'\n'
	                      //读取一下'\n'
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认放弃\n");
	}
	return 0;
}















