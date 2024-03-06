//喝汽水，一瓶汽水一元，2个空瓶可以换一瓶汽水，给20元，可以喝多少瓶汽水？(编程实现)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total = %d\n", total);
	return 0;
}
//例：
// 输入：20
// 输出：39