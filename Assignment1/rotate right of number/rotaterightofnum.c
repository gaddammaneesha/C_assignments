#include<stdio.h>
#include<math.h>
int main()
{
	int n, count = 0, r, res, t;
	printf("enter number to be rotated:\n");
	scanf_s("%d", &n);
	t = n;
	printf("enter no.of rotations:\n");
	scanf_s("%d", &r);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	while(r>0)
	{ 
			res = (t % 10)*(int)pow(10, (count - 1)) + (t / 10);
		t = res;
		r--;
	}
	printf("number after rotations:%d", res);
	//scanf_s("%d", &r);
	return 0;
}
