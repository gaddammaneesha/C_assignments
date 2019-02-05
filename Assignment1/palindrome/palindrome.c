#include<stdio.h>
int main()
{
	int r, n, temp, sum = 0, c = 1,i = 0;
	printf("enter number\n");
	scanf_s("%d",&n);
	temp = n;
	while (n > 0)
	{
		i++;
		r = n % 10;
		sum = sum + (r *c);
		n = n / 10;
		c = 10 * i;
	}
	if (temp == sum)
		printf("%d is palindrome\n", temp);
	else
		printf("%d is not palindrome\n", temp);
	return 0;
}