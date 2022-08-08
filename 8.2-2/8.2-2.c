#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//µÝ¹éÊµÏÖ½×³Ë
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Fac(n));
	return 0;
}