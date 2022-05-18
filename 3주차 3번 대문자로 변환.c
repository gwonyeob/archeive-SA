#include<stdio.h>
#include<string.h>
int main()
{
	char str[100] = { 0 };
	int i;
	printf("문자열을 입력하세요: ");
	scanf_s("%s", str, sizeof(str));
	int len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("모두 대문자로 변경 성공!\n");
	printf("%s", str, sizeof(str));
}