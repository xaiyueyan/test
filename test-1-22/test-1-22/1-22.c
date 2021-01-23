#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//关键字typedef/static/extern
//typedef类型重命名
//typedef unsigned int uint_32;
////将unsigned int 重命名为uint_32,所以uint_32跟unsigned int 同类型
//int main()
//{
//	unsigned int num1 = 2;
//	uint_32 num2 = 2;
//	printf("%d %d\n", num1, num2);
//	printf("%d %d\n", sizeof(num1),sizeof(num2));
//	return 0;
//}

//void test()
//{
//	//int a = 1;
//	static int a = 1;//修饰局部变量，static改变了生命周期，出了作用域一直存在，到程序结束
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern  int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//extern  int Add();
//int main()
//{
//	printf("%d\n", Add(5, 6));
//	return 0;
//}


//数组，一组相同类型元素的集合
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[5]);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}



//函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//上述代码改成函数：
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{	
	printf("%d\n", Add(3, 5));
	return 0;
}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//循环语句  while语句/for语句/do...while语句
//int main()
//{
//	int line = 0;
//	while (line <= 2000)
//	{
//		line++;
//		printf("继续敲代码\n");
//		printf("%d", line);
//	}
//	if (line > 2000)
//		printf("有一个好的offer\n");
//	return 0;
//}


//选择语句
//int main()
//{
//	int flag = 0;
//	printf("你会去好好学学习吗？(选择1 or 0):>");
//	scanf("%d", &flag);
//	if (flag == 1)
//	{
//		printf("坚持，你会有一个好的offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("c:\code\test.c\n");// \t被解析成一个转义字符
//	printf("c:\code\\test.c\n");
//	return 0;
//}


//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}