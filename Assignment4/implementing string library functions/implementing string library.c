#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void implementstrrev(char *s)
{
	char *p1, *p2, temp;
	for (p1 = s, p2 = s + strlen(s) - 1; p1<p2; p1++, p2--)			//p1 pointing to beginning of string 
																	//p2 pointitng to end of string
	{
		temp = *p1;
		*p1 = *p2;													//swapping p1 and p2
		*p2 = temp;
	}

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

}
void implementstrcpy(char *a, char *b)
{
	int i = 0;
	while ((b[i] = a[i]) != '\0')
	{
		i++;
	}
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
	int l;
	char *s, *s1, *s2, *s3;
	s = s1 = s2 = s3 = NULL;
	printf("enter size of string\n");
	scanf("%d", &l);
	if (l < 0)
		printf("please reenter the size as length cannot be negative\n");
	else
	{
		s = (char *)malloc(sizeof(char)*(l + 1));
		if (s == NULL)
		{
			printf("memory allocation failed\n");
			getchar();
		}
		else
		{
			printf("enter string\n");
			scanf(" %[^\n]s",s);
			implementstrrev(s);					//reversing the string 
		}
		printf("string after reversing is %s\n", s);
		printf("enter size of string\n");
		scanf("%d", &l);
		s1 = (char *)malloc(sizeof(char)*(l + 1));
		if (s1 == NULL)
		{
			printf("memory allocation failed\n");
			getchar();
		}
		else
		{
			printf("enter the string to be concatenated\n");
			scanf(" %[^\n]s", s1);
			int size_realloc = sizeof(s) + sizeof(s1) + 1;
			s = (char *)realloc(s, size_realloc);
			implementstrcat(s, s1);						//concatenating the string
		}
		printf("string after concatenation is %s\n", s);
		s2 = (char *)malloc(sizeof(char)*(l + 1));
		if (s2 == NULL)
		{
			printf("memory allocation failed\n");
			getchar();
		}
		else
		{
			implementstrcpy(s, s2);						//copying the string
			printf("string after copying into another character array is %s\n", s2);
		}
		printf("enter size of string\n");
		scanf("%d", &l);
		s3 = (char *)malloc(sizeof(char)*(l + 1));
		if (s3 == NULL)
		{
			printf("memory allocation failed\n");
			getchar();
		}
		else
		{
			printf("enter the string to be compared\n");

			scanf(" %[^\n]s", s3);
			implementstrcmp(s, s3);			//comparing the string
		}
	}
	free(s);
	free(s1);
	free(s2);
	free(s3);
	return 0;
}
