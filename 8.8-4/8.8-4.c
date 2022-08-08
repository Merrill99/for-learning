#include<stdio.h>
void init(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		a[i] = 0;
	}
}
void print(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void reverse(int a[], int n)
{
	int i = 0;
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right - 1];
		a[right - 1] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[5] = {8,9,10,11,12};
	int sz = sizeof(arr) / sizeof(arr[0]);

	print(arr, sz);//打印原始数组
	
	reverse(arr, sz);
	print(arr, sz);//打印逆序之后的数组

	init(arr , sz);
	print(arr , sz);//打印初始化后的数组
	return 0;
}