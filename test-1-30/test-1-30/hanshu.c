#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp; 
}
void Swap2(int * px, int * py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a=10;
	int b=20;
	printf("交换前：a=%d b=%d\n", a, b);
	Swap1(a, b);
	printf("交换后Swap1：a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("交换后Swap2：a=%d b=%d\n", a, b);
	return 0;
}


//int main()
//{
//
//	char arr1[] = "abcdef";
//	char arr2[] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}