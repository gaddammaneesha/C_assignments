#include<stdio.h>
int main()
{
	int rows, i, j, space, k;
	printf("enter rows\n");
	scanf_s("%d", &rows);
	int tmp = rows - 1;
	for (i = 1; i <= rows; i++)
	{

		for (space = 0; space < tmp; space++)
		{
			printf("  ");
		}
		tmp--;
		for (j = i; j >0; j--)
		{
			printf("%d ", j);
		}
		if (i != 1)
		{
			for (k = 2; k <= i; k++)
				printf("%d ", k);
		}
		printf("\n");

	}
	return 0;

}
