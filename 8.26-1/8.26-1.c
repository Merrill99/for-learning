#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int NumberOf1(int n) 
{
    int i = 0;
    int count = 0;
    for (i = 0; i < 32; i++)
    {
        if ((n >> i) & 1 == 1)
            count++;
    }
    return count;
}
int main()
{
    int num = 0;
    scanf("%d", &num);
    int n = NumberOf1(num);
    printf("%d", n);
    return 0;
}