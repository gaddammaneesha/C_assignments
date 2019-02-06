#include<stdio.h>
#include<ctype.h>
//counting alphabets
int main()
{
	char text[81];
	printf("enter string\n");
	gets(text);
	int dig_count = 0, alpha_count = 0, blank_count = 0, tab_count = 0, i = 0;
	while (text[i] != '\0')
	{
		if (isalpha(text[i]))
			alpha_count++;
		else if (isdigit(text[i]))
			dig_count++;
		else if (text[i] ==' ')
			blank_count++;
		else
			tab_count++;
		i++;
	}
	printf("no.of aplhabets are %d", alpha_count);
	printf("no.of digits are %d", dig_count);
	printf("no.of blank spaces are %d", blank_count);
	printf("no.of tabs are %d", tab_count);
	return 0;
}