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
	printf("���Խ���1�����ڹػ����������:��������ȡ���ػ�!\n������:>");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
}

//int main()
//{//ģ���û���¼�龰������ֻ�ܵ�½���Ρ�(ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����)
//	char psw[20] = "";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (strcmp(psw, "password") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}


//int main()
//{//��ʾ����ַ��������ƶ������м���
//	char arr1[] = "welcome to xian";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//whileѭ��ʵ��
//	/*while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}*/
//	//forѭ��ʵ��
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
//{//����1
//��һ������������Ҿ����ĳ������n����дint binsearch(int x,int v[],int n:��v[0]<=v[1]<=v[0]...<=v[n-1])�������в���x
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
//				printf("�ҵ��ˣ��±�ֵ��:%d\n", mid);
//				break;
//			}
//
//			if ("left>right")
//			{
//				printf("�Ҳ���\n");
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

//{   //����2
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
//			printf("�ҵ��ˣ��±�ֵ��:%d\n", mid);
//			break;
//		}
//		if (left>right)
//		{
//			printf("�Ҳ���\n");
//			break;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	//����1��+2��+3��...+10!
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
//	//����1��+2��+3��...+10!
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
//	//����n�Ľ׳�
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
//			//break;//������1 2 3 4
//			continue;//������1 2 3 4��ѭ��
//		printf("%d\n", i);
//		i++;
//
//	}while (i <=10);
//	return 0;
//}
//

//int main()
//{
//	//ѭ��Ҫѭ��0�Σ���Ϊk=0Ϊ��
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


// int main()
//{
//	int i = 0;
//	for (i = 1/*��ʼ��*/; i <= 10/*�жϲ���*/; i++/*��������*/)
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
//	//��forѭ����ӡ1-10
//	int i = 0;
//	//for (i = 1/%��ʼ��*/; i <= 10/*�жϲ���*/; i++/*��������*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ��Y/N");
//	//��ջ�����
//	while (getchar() != '\n')
//	{
//		;
//	}
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	//ֻ��ӡ�����ַ�
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
//	//���һ���ַ�
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar()���һ���ַ�
//		putchar(ch);//��ӡ����ַ�
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
//			break;//��������1 2 3 4
//			//continue;//��������1 2 3 4���Ǹ�ѭ��
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
