
#include<stdio.h>
int main()
{
	int n, r = 0;
	printf("enter number\n");
	scanf_s("%d", &n);
	while (n>0)
	{
		r = r * 10 + n % 10;
		n = n / 10;
	}
	printf("reverse of a number is %d ", r);

}

