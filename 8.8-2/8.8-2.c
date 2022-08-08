#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//非递归实现斐波那契数列
int Fib(int n)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int next = 0;
	if (n < 3)
			return 1;
	else
	{
		for (i = 2; i < n; i++)
		{
			next = a + b;
			a = b;
			b = next;
		}
	}
	return next;
}

int main()
{
	int x = 0;
	scanf("%d", &x);
	int result = Fib(x);
	printf("%d\n", result);
	return 0;
}