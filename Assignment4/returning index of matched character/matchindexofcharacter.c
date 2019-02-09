#include <stdio.h>
int matchchar(char *p, char *q)
{
	int i = 0, j;
	while (*(p + i) != '\0')
	{
		j = 0;
		while (*(q + j) != '\0')
		{
			if ((*(p + i)) == (*(q + j)))
			{
				printf("character of s2 matched at index in s1\t");
				return i;
			}
			j++;
		}
		i++;
	}
}
int main()
{
	char s1[50], s2[50];
	int ind;
	printf("enter 2 strings\n");
	gets(s1);
	gets(s2);
	char *a = s1, *b = s2;
	ind = matchchar(a, b);
	printf("%d", ind);
	return 0;
}

