#include<stdio.h>
int main()
{
	int n, i = 7, j, pos, bits, a[8] = { 0 };
	printf("enter decimal number\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		a[i--] = n % 2;
		n = n / 2;
	}
	printf("enter position to rotate\n");
	scanf_s("%d", &pos);
	printf("enter the bits\n");
	scanf_s("%d", &bits);
	for (j = pos; j <= pos + bits; j++)
	{
		if (a[j] == 1)
			a[j] = 0;
		else
			a[j] = 1;
	}
	printf("the number after rotation\n");
	for (i = 0; i <8; i++)
		printf("%d", a[i]);
	scanf_s("%d", &n);
}