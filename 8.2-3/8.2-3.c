#include<stdio.h>
//�ַ�������
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
	*string = *(string + len - 1);//�����һλԪ�ط�����Ԫ���У�
	*(string + len - 1) = '\0';//�����һλԪ�ط���'/0';
	//���м��ַ�ʣ�����������������Ǽ�������
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