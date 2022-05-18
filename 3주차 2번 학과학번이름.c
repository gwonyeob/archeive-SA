#include<stdio.h>
int main()
{
	char text[200] = { 0 };
	printf("학과, 학번, 이름을 입력하세요: ");
	gets(text);
	puts(text);
}