#include<stdio.h>
//µİ¹éÊµÏÖstrlen
int my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str+1);
}

int main()
{
	char p[] = "abcde";
	int len = my_strlen(p);
	printf("%d", len);
	return 0;
}