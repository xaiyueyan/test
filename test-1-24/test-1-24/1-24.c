#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	printf("输入一个整数:");
	scanf("%d", &a);
	if (a % 2 == 1)
	{
		printf("%d是一个奇数",a);
	}
	return 0;
}


//int main()//输出1-100之间的奇数
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}