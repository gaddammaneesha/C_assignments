#include <stdio.h>
#include<string.h>
int main()
{
	char s[50], temp;
	int i, j = 1, l;
	printf("enter string\n");
	gets(s);
	puts(s);
	l = strlen(s);
	while (j<l)
	{
		temp = s[0];
		for (i = 0; i<l - 1; i++)
		{
			s[i] = s[i + 1];
		}
		s[i] = temp;
		puts(s);
		j++;
	}
	return 0;
}




