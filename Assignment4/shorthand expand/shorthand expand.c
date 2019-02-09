#include <stdio.h>
#include<ctype.h>
//expand
void expand(char *p, char *q)
{
	int i = 0, j = 0, k, l;
	while (*(p + i) != '\0')
	{
		if (*(p + i) != '-')
		{
			*(q + j) = *(p + i);
			j++;
		}
		else
		{
			if (isalpha(*(p + (i - 1))))
			{
				k = (int)(*(p + (i - 1)));
				l = (int)(*(p + (i + 1)));
				while (k<l - 1)
				{
					*(q + j) = (char)(++k);
					j++;
				}
			}
			else
			{
				k = (*(p + (i - 1)));
				l = (*(p + (i + 1)));
				while (k<l - 1)
				{
					*(q + j) = (char)(++k);
					j++;
				}
			}

		}
		i++;
	}
	*(q + j) = '\0';
	printf("string %s after expanding shorthand notation is %s", p, q);
	gets();
}
int main()
{
	char s1[50], s2[50];
	int ind;
	printf("enter string\n");
	gets(s1);
	expand(s1, s2);
	return 0;
}




