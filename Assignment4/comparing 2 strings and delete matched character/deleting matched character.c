#include <stdio.h>
void delchar(char *p, char *q)
{
	int i = 0, c, j, k;
	while (*(p + i) != '\0')
	{
		c = 0;
		k = 0;
		while (*(q + k) != '\0')
		{
			if ((*(p + i)) == *(q + k))
			{
				j = i;
				while ((*(p + j)) != '\0')
				{
					*(p + j) = *(p + (j + 1));
					j++;
				}
				*(p + j) = '\0';
				c++;
				break;
			}
			else
				k++;
		}
		if (c != 1)
			i++;

	}
	printf("after removing characters the string is  %s", p);
}
int main()
{
	char s[50], p[50];
	int ind;
	printf("enter 1st string\n");
	gets(s);
	printf("enter 2nd  string\n");
	gets(p);
	delchar(s, p);
	return 0;
}




