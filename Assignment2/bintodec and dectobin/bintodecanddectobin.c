#include<stdio.h>
void bintodec();
void dectobin();
int main()
{
	int n,num1;
	printf("enter the decimal number\n");
	scanf_s("%d", &n);
	printf("enter binary number\n");
	scanf_s("%d", &num1);
	bintodec(num1);
	dectobin(n);
	return 0;
}
void dectobin(int num)
{
	int base = 1, r, sum = 0;
	while (num > 0)
	{
		r = num % 2;
		sum = sum + r * base;
		num = num / 2;
		base = base * 10;
	}
	printf("binary value is %d\n", sum);
	//scanf_s("%d", &num);

}
void bintodec(int num)
{

	int dec_num = 0, bin_num, base = 1, r;

		bin_num = num;

	while (num > 0)

	{
		r = num % 10;

		dec_num = dec_num + r * base;

		num = num / 10;

		base = base * 2;

			}

	printf("%d\n", dec_num);


}
