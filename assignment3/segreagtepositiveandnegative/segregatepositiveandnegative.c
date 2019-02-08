#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n, i, j = 0;
	printf("enter size\n");
	scanf_s("%d", &n);
	int a[50];
	printf("enter elements\n");
	for (i = 0; i<n; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i<n; i++)
	{
		if (a[i]<0)
		{
			if (i != j)
				swap(&a[i], &a[j]);
			j++;
		}
	}
	printf("negative and positive numbers are segregated\n");
	for (i = 0; i<n; i++)
		printf("%d\t", a[i]);
		return 0;
}

