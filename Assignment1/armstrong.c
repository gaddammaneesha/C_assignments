#include<stdio.h>
#include<math.h>
int length(int);
void check_armstr(int, int);
int main()
{
	int n,p;
	printf("enter number\n");
	scanf_s("%d", &n);
	p=length(n);
	check_armstr(n,p);
	return 0;
}
int length(int n)
{
	int count=0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return count;

}
void check_armstr(int n, int l)
{
	int r,temp=n, sum;
	sum = 0;
	while (n > 0)
	{
		r = n % 10;
		sum = sum + pow(r, l);
		n = n / 10;
	}
	if (temp == sum)
		printf("%d is armstrong number", temp);
	else
		printf("%d is not  armstrong number", temp);
}