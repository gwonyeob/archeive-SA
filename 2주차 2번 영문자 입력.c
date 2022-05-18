#include<stdio.h>
int main() 
{
	char c = { 0 };
	char d = { 0 };
	while (1)
	{
		printf("영문자를 입력하세요:(0을 입력하면 종료) ");
		scanf_s("%c", &c);
		getchar();
		d = c;
		if (c >= 'A' && c <= 'Z')
		{
			c += 32;
			printf("대문자 %c를 소문자로는 %c\n", d, c);
		}
		else if (c >= 'a' && c <= 'z')
		{
			c -= 32;
			printf("소문자 %c를 대문자로는 %c\n", d, c);

		}
		else if (c == '0')
			printf("프로그램을 종료합니다.");
			return 0;
		else
		{
			printf("잘못 입력\n");
		}
	}
}