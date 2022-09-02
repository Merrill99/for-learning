#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//基本思路
//n = 15
//n = n&(n-1)
//1111 n
//1110 n-1
//1110 n
//1101 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n

int NumberOf1(int n) 
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
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