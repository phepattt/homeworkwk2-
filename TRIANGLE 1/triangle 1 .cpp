#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int h, j, i;
	printf(" triangle high :");
	scanf("%d", &h);
	for (i = 0; i < h; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}


}