#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	return 0;
}



//int binary_search(int arr[],int k,int sz)
//{//�����Ķ��ֲ���
//	int left = 0;
//	int right = sz;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz=sizeof(arr)/sizeof(arr[0])-1;
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}


//int is_leap_year(int y)
//{ //�ж��ǲ�������
//	if ((y % 4 == 0) && (y % 100 !=  0))
//	{
//		return 1;
//	}
//	else if (y % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ( is_leap_year(year)==1)
//	{
//		printf("%d������\n", year);
//	}
//	return 0;
//}


//int is_prime(int z)
//{//�ж�һ�����ǲ�������
//	int i = 0;
//	for (i = 2; i < z; i++)
//	{
//		if (z% i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (is_prime(a) == 1)
//	{
//		printf("%d������\n", a);
//	}
//	return 0;
//}