#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int count_1(int n)
{
	int count = 0;
	while(n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", & a, & b);
	int n = a ^ b;
	int num = count_1(n);
	printf("%d", num);
	return 0;
}