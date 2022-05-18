#include <stdio.h>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 9 - i; j > 0; j--)
			printf(" ");
		for (int k = 2 * i - 1; k > 0; k--)
			printf("*");
		printf("\n");
	}
	return 0;
}