#include <stdio.h>
void delchar(char *p, char q)
{
	int i = 0, j;
	while (*(p + i) != '\0')
	{
		if ((*(p + i)) == q)
		{
			j = i;
			while ((*(p + j)) != '\0')
			{
				*(p + j) = *(p + (j + 1));
				j++;
			}
			*(p + j) = '\0';

		}
		else
			i++;
	}
	printf("after removing characters are %s", p);
}
int main()
{
	char s[50], ch;
	int ind;
	printf("enter string\n");
	gets(s);
	printf("enter character to be deleted\n");
	scanf_s("%c", &ch);
	delchar(s, ch);
	return 0;
}



