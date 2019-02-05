#include<stdio.h>
int res = -1;
long int  res1 = -1;
float res2;
int main()
{
	int a, b;
	printf("enter values of a,b\n");
	scanf_s("%d %d", &a, &b);
	res = add(a, b);
	printf("addition result is %d\n", res);
	res = sub(a, b);
	printf("subtraction result is %d\n", res);
	res1 = mul(a, b);
	printf("multiplication result is %ld\n", res1);
	res2 = div(a, b);
	printf("division result is %f\n", res2);
	scanf_s("%d", &a);
	return 0;
}