#include<stdio.h>
//字符串逆序
int my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}

void reverse_string(char* string)
{
	char tmp = *string;
	int len = my_strlen(string);
	*string = *(string + len - 1);//将最后一位元素放入首元素中；
	*(string + len - 1) = '\0';//将最后一位元素放入'/0';
	//当中间字符剩余两个及两个以上是继续逆序
	if (my_strlen(string + 1) >= 2)
	{
		reverse_string(string + 1);
	}
	*(string + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}