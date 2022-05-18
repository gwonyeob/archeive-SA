#include<stdio.h>
int main()
{
	int num = 0;
	int i;
	int count = 0;
reinput:
	printf("정수를 입력하세요:(음수를 입력하면 다시 시도)");
	scanf_s("%d", &num);
	if (num < 0)
		goto reinput;
	for (i = 0; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("짝수는 %d개 입니다.", count);
}