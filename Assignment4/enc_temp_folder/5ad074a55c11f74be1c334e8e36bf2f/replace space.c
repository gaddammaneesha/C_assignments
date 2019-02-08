#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 0;
	char cat[50];
	char *s;
	printf("enter string\n");
	gets(cat);
	s = (char *)malloc(sizeof(char)*strlen(cat));
	s = cat;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ')
			*(s + i) = '-';
		i++;
	}
	puts( s);
	gets();
}