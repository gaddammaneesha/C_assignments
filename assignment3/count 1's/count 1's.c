#include <stdio.h>
int dectobin(int n)
{
	int r, c = 0;
	while (n>0)
	{
		r = n % 2;
		if (r == 1)
			c++;
		n = n / 2;
	}
	return c;
}
int main()
{
	int n, p;
	printf("enter number\n");
	scanf_s("%d", &n);
	p = dectobin(n);
	printf("no.of 1s are %d", p);
	return 0;
}

