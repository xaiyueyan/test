#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	printf("����һ������:");
	scanf("%d", &a);
	if (a % 2 == 1)
	{
		printf("%d��һ������",a);
	}
	return 0;
}


//int main()//���1-100֮�������
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