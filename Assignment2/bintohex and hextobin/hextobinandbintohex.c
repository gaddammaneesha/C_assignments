#include <stdio.h>
void hextobin(int a)
{
	int r, sum = 0, base = 1, t = a;
	while (a>0)
	{
		r = a % 2;
		sum = sum + r*base;
		a = a / 2;
		base = base * 10;
	}
	if (t >= 0 && t <= 3)
		printf("00%d", sum);
	else if (t >= 4 && t <= 7)
		printf("0%d", sum);
	else
		printf("%d", sum);
	
}
void bintohex(int num)
{
	int r, i = 0,j;
	char hex[50];
	while (num > 0)
	{
		r = num % 16;
		num = num / 16;
		if (r <= 9)
		{
			hex[i] = 48 + r;
			i++;
		}
		else
		{
			hex[i] = 55 + r;
			i++;
		}
	}
	printf("\nHexadecimal value is:");
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", hex[j]);
	}
	scanf_s("%d", &num);
}

int main()
{
	int i = 0, a, num;
	char hex[50];
	printf("enter hexadecimal number\n");
	gets(hex);
	while (hex[i] != '\0')
	{
		if (hex[i] <= 57)
		{
			a = hex[i] - 48;
			hextobin(a);
		}
		else
		{
			switch (hex[i])
			{
			case 'A':
			case 'a':a = 10;
				hextobin(a);
				break;
			case 'B':
			case 'b':a = 11;
				hextobin(a);
				break;
			case 'C':
			case 'c':a = 12;
				hextobin(a);
				break;
			case 'D':
			case 'd':a = 13;
				hextobin(a);
				break;
			case 'E':
			case 'e':a = 14;
				hextobin(a);
				break;
			case 'F':
			case 'f':a = 15;
				hextobin(a);
				break;
			default:printf("invalid");
				break;
			}

		}
		i++;
	}
	printf("enter binary number\n");
	scanf_s("%d", &num);
	bintohex(num);
	return 0;
}

