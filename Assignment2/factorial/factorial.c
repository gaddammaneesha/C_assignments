#include<stdio.h>
int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n*fact(n - 1);
}
int main()
{
	int n, res;
	printf("enter number\n");
	scanf_s("%d", &n);
	res = fact(n);
	printf("factorial of a number is %d", res);

	return 0;
}


