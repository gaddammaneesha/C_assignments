#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, j, sum, c = 0;
	printf("enter array size\n");
	scanf_s("%d", &n);
	int *a;
	a = (int *)malloc(n * sizeof(int));
	for (i = 0; i<n; i++)
		scanf_s("%d", &a[i]);
	printf("enter sum \n");
	scanf_s("%d", &sum);
	for (i = 0; i<n; i++)
	{
		for (j = i + 1; j<n; j++)
		{
			if (a[i] + a[j] == sum)
			{
				printf("sum is from index %d to %d index", i, j);
				c++;
			}
		}
		if (c == 1)
			break;
	}
	if (i == n)
		printf("sum not found\n");
	scanf_s("%d", &n);
	return 0;
}

