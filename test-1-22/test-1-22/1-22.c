#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ؼ���typedef/static/extern
//typedef����������
//typedef unsigned int uint_32;
////��unsigned int ������Ϊuint_32,����uint_32��unsigned int ͬ����
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
//	static int a = 1;//���ξֲ�������static�ı����������ڣ�����������һֱ���ڣ����������
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


//���飬һ����ͬ����Ԫ�صļ���
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



//����
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//��������ĳɺ�����
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
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//ѭ�����  while���/for���/do...while���
//int main()
//{
//	int line = 0;
//	while (line <= 2000)
//	{
//		line++;
//		printf("�����ô���\n");
//		printf("%d", line);
//	}
//	if (line > 2000)
//		printf("��һ���õ�offer\n");
//	return 0;
//}


//ѡ�����
//int main()
//{
//	int flag = 0;
//	printf("���ȥ�ú�ѧѧϰ��(ѡ��1 or 0):>");
//	scanf("%d", &flag);
//	if (flag == 1)
//	{
//		printf("��֣������һ���õ�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("c:\code\test.c\n");// \t��������һ��ת���ַ�
//	printf("c:\code\\test.c\n");
//	return 0;
//}


//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}