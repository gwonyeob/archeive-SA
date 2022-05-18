#include<stdio.h>
int main()
{
	int num[6] = { 0 };
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", num, sizeof(num));
	}
	for (i = 0; i < 5; i++)
	{
		sum += num[i];
	}
	printf("ÇÕ°è: %d\n", sum);
	printf("Æò±Õ: %f", (double)sum / 5.0);
}