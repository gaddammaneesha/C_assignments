#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char **s;
	int n, i, j;
	printf("enter no.of strings\n");
	scanf_s("%d", &n);
	s = (char **)malloc(sizeof(char *)*n);
	printf("enter strings\n");
	for (i = 0; i <= n; i++)
		s[i] = (char *)malloc(sizeof(char) * 25);
	for (i = 0; i <= n; i++)
	{
	
		j = i + 1;
		while (j<=n)
		{
			
			char temp[25];
			if (strcmp((*(s+i)),(* (s+j))) == 1)
			{
				strcpy_s(temp, sizeof(*(s+j)),*( s+j));
				strcpy_s(*(s+j), sizeof(*(s+i)), *(s+i));
				strcpy_s(*(s+i), sizeof(temp), temp);
			}
			j++;
		}
	}
	for (i = 0; i <= n; i++)
		printf("%s\n", s[i]);
	
}
