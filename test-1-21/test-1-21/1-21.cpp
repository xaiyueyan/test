#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����ʹ��
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("����������������>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d\n", sum);
	printf("sum=%d\n",sum);
	return 0;
}

//�ֲ�������ȫ�ֱ���
//int a = 100;//ȫ�ֱ���
//int main()
//{
//	int a = 10;//�ֲ����������ֲ�������ȫ�ֱ���ͬ��ʱ���ֲ���������
//	printf("%d\n", a);
//
//	return 0;
//}

//��������
//int main()
//{
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
	//printf("%d\n", sizeof(long double));  sizef�����С����λ���ֽ�

	//return 0;
//}