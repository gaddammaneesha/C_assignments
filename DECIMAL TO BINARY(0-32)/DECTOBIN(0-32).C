
#include<stdio.h>
int main()
{
	int n, a[7], i, j = 1;
	printf("Enter n:");
	scanf_s("%d", &n);
	if ((n >= 0) && (n <= 32))
	{
		while (n>0)
		{
			a[j] = n % 2;
			n = n / 2;
			j++;
		}
	}
	a[j] = 1;
	for (i = j; i>0; i--)
		printf("%d", a[i]);
	scanf_s("%d", &n);
	return 0;
}

