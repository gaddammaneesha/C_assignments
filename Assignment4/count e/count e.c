#include<stdio.h>
int main()
{
	int i=0,j,c=0;
	char * s[] = { "we will teach you how to ", "Move a mountain ", "Level a building ","Erase the past","Make a million " };
	while (i < 5)
	{
		j = 0;
		while( *(*(s+i)+j)!= '\0')
		{

			if( *(*(s+i)+j )== 'e')
				c++;
			j++;
		}
		i++;
	}
	printf("count of e's in array are %d", c);

	return 0;
}