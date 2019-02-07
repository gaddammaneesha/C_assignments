#include<stdio.h>
#include<math.h>
int main()
{
	int n, count = 0, r, dig, res;
	printf("enter number to be rotated:\n");
	scanf_s("%d", &n);
	int t = n;
	printf("enter no.of rotations:\n");
	scanf_s("%d", &r);
	while (n != 0)
	{
		int rem = n % 10;
		n = n / 10;
		count++;
	}

	while (r>0)
	{
		res = (t % 10)*pow(10, (count - 1)) + (t / 10);
		r--;

	}
	printf("number after rotations:%d", res);
	//rttyr
	return 0;
}
