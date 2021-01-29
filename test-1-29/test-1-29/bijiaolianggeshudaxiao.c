#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int GetMaxNum(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);
	printf("%d\n", GetMaxNum(a,b));
	return 0;
}
//int main()
//{//比较两个数大小
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("%d\n", b);
//	}
//	return 0;
//}