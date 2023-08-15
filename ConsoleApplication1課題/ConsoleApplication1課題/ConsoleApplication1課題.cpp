#include<iostream>

int main()
{
	int i, j;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf(" \n");

	int a, b;
	int m = 4;

	for (a = 0; a <= 4; a++)
	{
		for (b = 0; b <= (m - a); b++)
		{
			printf(" ");
		}

		for (b = 0; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf(" \n");

	int c, d;
	int q = 4;

	for (c = 0; c <= 4; c++)
	{
		for (d = 0; d <= (q - c); d++)
		{
			printf("*");
		}

		for (d = 0; d <= c; d++)
		{
			printf(" ");
		}
		printf("\n");
	}

	printf(" \n");
	
	int e, f;
	int w = 5;

	for (e = 0; e < 5; e++)
	{
		for (f = 0; f < e; f++)
		{
			printf(" ");
		}

		for (f = w - e; f > 0; f--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf(" \n");

	int r = 5;
	int g, h;
	int num;
	int max;

	max = (r - 1) * 2 + 1;

	for (g = 0; g < r; g++) {
		num = g * 2 + 1;


		for (h = 0; h < (max - num) / 2; h++) {
			printf(" ");
		}

		for (h = 0; h < num; h++) {
			printf("*");
		}

		for (h = 0; h < (max - num) / 2; h++) {
			printf(" ");
		}
		printf("\n");
	}

	printf(" \n");

	int t = 5;
	int k, l;

	for (k = t; k >= 1; k--) {
		for (l = 1; l <= t - k; l++) {
			printf(" ");
		}

		for (l = 1; l < 2 * k; l++) {
			printf("*");
		}

		printf("\n");
	}


}