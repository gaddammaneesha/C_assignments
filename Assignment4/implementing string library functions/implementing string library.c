#include <stdio.h>
#include<string.h>
void implementstrrev(char s[50])
{
	char *p1, *p2, temp;
	for (p1 = s, p2 = s + strlen(s) - 1; p1<p2; p1++, p2--)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
	printf("string after reversing is %s\n", s);

}
void implementstrcat(char *p, char *q)
{
	int i = 0, j = 0;
	while (*(p + i) != '\0')
	{
		i++;
	}
	while (*(q + j) != '\0')
	{
		*(p + i) = *(q + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	printf("string after concatenation is %s\n", p);
}
void implementstrcpy(char *a, char *b)
{
	int i = 0;
	while ((b[i] = a[i]) != '\0')
	{
		i++;
	}
	printf("string after copying into another character array is %s\n", b);
}
void implementstrcmp(char *p1, char *p2)
{
	int i = 0;
	while (p1[i] == p2[i])
	{
		if (p1[i] == '\0')
		{
			printf("0");
			break;
		}
		i++;
	}
	if ((p1[i] - p2[i])<0)
		printf("1");
	if ((p1[i] - p2[i])>0)
		printf("-1");
}
int main()
{
	char s[50], s1[50], s2[50], s3[50];
	printf("enter string\n");
	gets(s);
	implementstrrev(s);
	printf("enter the string to be concatenated\n");
	gets(s1);
	implementstrcat(s, s1);
	implementstrcpy(s, s2);
	printf("enter the string to be compared\n");
	gets(s3);
	implementstrcmp(s, s3);
	return 0;
}

