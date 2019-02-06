#include<stdio.h>
int main()
{
	int n, r = 0, temp;
	printf("enter number\n");
	scanf_s("%d", &n);
	temp = n;
	while (n>0)
	{
		r = r * 10 + n % 10;
		n = n / 10;
	}
	if (temp == r)
		printf("%d is palindrome", temp);
	else
		printf("%d is not palindrome", temp);
	//scanf_s("%d", &n);
}

