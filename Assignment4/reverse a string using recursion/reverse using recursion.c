#include<stdio.h>
#include<string.h>
void reverse(char *a, int start, int end)
{
	int temp;
	if (start >= end)
		return 0;
	temp = *(a + start);
	*(a + start) = *(a + end);
	*(a + end) = temp;
	reverse(a, ++start, --end);
	printf("string after reversing is %s", a);
	gets();
	
}
int main()
{
	char s[50];
	printf("enter string\n");
	gets(s);
	int l = strlen(s);
	reverse(s, 0, l - 1);
	return 0;
}