#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归实现斐波那契数列
int Fib(int n)
{
	if (n < 3)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main() 
{
	int x = 0;
	scanf("%d", &x);
	int result = Fib(x);
	printf("%d\n", result);
	return 0;
}