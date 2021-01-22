#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//变量使用
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数：>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d\n", sum);
	printf("sum=%d\n",sum);
	return 0;
}

//局部变量和全局变量
//int a = 100;//全局变量
//int main()
//{
//	int a = 10;//局部变量，当局部变量和全局变量同名时，局部变量优先
//	printf("%d\n", a);
//
//	return 0;
//}

//数据类型
//int main()
//{
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
	//printf("%d\n", sizeof(long double));  sizef计算大小，单位是字节

	//return 0;
//}