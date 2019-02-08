#include<stdio.h>
#include<ctype.h>
int main()
{
	int i = 0;
	char l[50], u[50];
	printf("enter lowercase string\n");
	gets(l);
	printf("enter uppercase string\n");
	gets(u);
	while (l[i] != '\0')
	{
		if (islower(l[i]))
			l[i] = toupper(l[i]);
		i++;
	}
	printf("string after converting to uppercase is : %s",l);
	i = 0;
	while (u[i]!='\0')
	{
		if (isupper(u[i]))
			u[i] = tolower(u[i]);
			i++;
	}
	printf("string after converting to lowercase is : %s", u);
	gets();
}