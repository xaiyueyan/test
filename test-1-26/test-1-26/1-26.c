#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	char input[] = { 10 };
	system("shutdown -s -t 60");
again:
	printf("电脑将在1分钟内关机，如果输入:我是猪，就取消关机!\n请输入:>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
}

//int main()
//{//模拟用户登录情景，并且只能登陆三次。(只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序)
//	char psw[20] = "";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (strcmp(psw, "password") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}


//int main()
//{//演示多个字符从两端移动，向中间汇聚
//	char arr1[] = "welcome to xian";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//while循环实现
//	/*while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}*/
//	//for循环实现
//	for (left = 0, right = strlen(arr1) - 1;
//		left <= right;
//		left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//

//int bin_search(int x, int v[], int n)
//{//方法1
//在一个有序数组查找具体的某个数字n。编写int binsearch(int x,int v[],int n:在v[0]<=v[1]<=v[0]...<=v[n-1])的数组中查找x
//		int mid = 0;
//		int left = 0;
//		int right = n;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			if (v[mid] > x)
//			{
//				right = mid - 1;
//			}
//			else if (v[mid] < x)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				printf("找到了，下标值是:%d\n", mid);
//				break;
//			}
//
//			if ("left>right")
//			{
//				printf("找不到\n");
//				break;
//			}
//		}
//
//		return 0;
//	}
//	int main()
//	{
//		int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//		int x;
//		scanf("%d", &x);
//		int n = sizeof(v) / sizeof(v[0]) - 1;
//		bin_search(x, v, n);
//		return 0;
//	}

//int main()

//{   //方法2
//	int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int x;
//	scanf("%d", &x);
//	int n = sizeof(v) / sizeof(v[0]) - 1;
//	int left = 0;
//	int right = n;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (v[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (v[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下表值是:%d\n", mid);
//			break;
//		}
//		if (left>right)
//		{
//			printf("找不到\n");
//			break;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	//计算1！+2！+3！...+10!
//		int n = 0;
//		int i = 0;
//		int ret = 1;
//		int sum = 0;
//		scanf("%d", &n);
//		for (n = 1; n <= 5; n++)
//		{
//			ret = ret*n;
//			sum = sum + ret;
//		}
//		printf("%d\n", ret);
//		return 0;
//	}


//int main()
//{
//	//计算1！+2！+3！...+10!
//		int n = 0;
//		int i = 0;
//		int ret = 1;
//		int sum = 0;
//		scanf("%d", &n);
//		for (n = 1; n <= 10; n++)
//		{
//			ret = 1;
//			for (i = 1; i <= n; i++)
//			{
//				ret = ret*i;
//			}
//			sum = sum + ret;
//		}
//		printf("%d\n", sum);
//		return 0;
//	}




//int main()
//{
//	//计算n的阶乘
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;//输出结果1 2 3 4
//			continue;//输出结果1 2 3 4死循环
//		printf("%d\n", i);
//		i++;
//
//	}while (i <=10);
//	return 0;
//}
//

//int main()
//{
//	//循环要循环0次，因为k=0为假
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


// int main()
//{
//	int i = 0;
//	for (i = 1/*初始化*/; i <= 10/*判断部分*/; i++/*调整部分*/)
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//			//continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//

//int main()
//{
//	//用for循环打印1-10
//	int i = 0;
//	//for (i = 1/%初始化*/; i <= 10/*判断部分*/; i++/*调整部分*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认Y/N");
//	//清空缓冲区
//	while (getchar() != '\n')
//	{
//		;
//	}
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	//只打印数字字符
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	//输出一个字符
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar()获得一个字符
//		putchar(ch);//打印这个字符
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//输出结果是1 2 3 4
//			//continue;//输出结果是1 2 3 4，是个循环
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
