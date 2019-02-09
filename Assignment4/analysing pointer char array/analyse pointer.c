#include<stdio.h>
int main()
{
	char *color[6] = { "red", "green", "blue", "white", "black", "yellow" };
	printf("%d", color);
	printf("%d",(color + 2));
	printf("%s", *color);
	printf("%s", *(color + 2));
	printf("%d %s", color[5], *(color + 5));
	gets();
	return 0;
}