#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
int DigitSum(unsigned int a)
{
	int b = 0;
	if (a > 9)
		return DigitSum(a / 10) + a % 10;
	else
		return a;
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);
	return 0;
}