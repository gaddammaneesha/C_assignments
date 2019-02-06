#include<stdio.h>
int main()
{
	int n, max, min, count = -1, sum = 0;
	do
	{
		scanf_s("%d", &n);
		count++;
		if (count == 0)
		{
			max = min = n;
		}
		else if (n <= 0)
			continue;
		else
		{
			if (n>max)
				max = n;
			if (n<min)
				min = n;
		}
		sum += n;
	} while (n>0);
	if (count == 0)
		printf("No positive numbers and min max numbers\n");
	else
		printf("no.of positive numbers=%d\nmax number=%d\nmin number=%d\navg=%d\n", count, max, min, sum / (count));
	
	return 0;
}
