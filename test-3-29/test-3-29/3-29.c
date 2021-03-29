#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10];
//	printf("%d\n",arr);
//	printf("%d\n",&arr[0]+1);
//	printf("%d\n",&arr+1);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* *pp = &p;//二级指针
//	return 0;
//}

//void print(char*arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//}
//void print(char* *arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%s\n", *(arr + i));
//		printf("%s\n", arr[i]);
//
//	}
//}
//int main()
//{
//	char* arr[3] = { "zhangsan", "lisi", "wangwu" };//指针数组
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 0, 1, 2, 3, 4 };
//	int arr4[] = { 1, 1, 1, 1, 1 };
//	int* arr[4] = { arr1, arr2, arr3, arr4 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//struct Student
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Student s = {"张三",20,"男"};
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}