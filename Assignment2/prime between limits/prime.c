#include <stdio.h>
//prime numbers between limits low and high
int main()
{
	int low, high, i, j, count = 0;
	printf("enter the low limit\n");
	scanf_s("%d", &low);
	printf("enter the high limit\n");
	scanf_s("%d", &high);
	printf("prime numbers between %d and %d are :", low, high);
	for (i = low; i <= high; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i%j == 0)
				count++;
		}
		if (count == 2)
			printf("%d  ", i);
	}
	
	return 0;
}

