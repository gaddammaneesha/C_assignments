#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//shorthand expand
void expand(char *p)
{
	printf("string after expanding shorthand notation is\n");
	int i = 0, k, l;
	while (*(p + i) != '\0')
	{
		if (p[i] != '-')				//printing characters till'-'
			printf("%c", p[i]);
		else
		{
			if (isalpha(*(p + (i - 1))))   //checking for alphabets
			{
				k = (int)(*(p + (i - 1)));		//asci values
				l = (int)(*(p + (i + 1)));
				k++;
				while (k<l)						//loop for expanding
					printf("%c",k++);
			}
			else
			{
				k = (*(p + (i - 1)));	
				l = (*(p + (i + 1)));
				k++;
				while (k<l )				//loop for expanding
					printf("%c", k++);
			}
		}
		i++;
	}
	free(p);			//deallocating memory
	getchar();

}
int main()
{
	char *s1;
	int i=1,len,flag=0;
	s1 = NULL;
	printf("enter the length of the string \n");
	scanf("%d",&len);
	s1 = (char *)malloc(sizeof(char)*(len+1)); // dynamic memory allocation
	if (s1 == NULL)
	{
		printf("Dynamic memory allocation failed\n");	//failed memory allocation
		return 0;
	}
	else
	{
		printf("Dynamic memory allocation success\n");
		printf("enter string of mentioned size %d\n",len);
		scanf("%s",s1);
		//input validation
		if (!isalpha(s1[0])&&!isdigit(s1[0]))		//if 1st character is invalid 
		{
			printf("invalid input....please enter the string properly \n");
			getchar();
		}
		if (!isalpha(s1[len-1]) && !isdigit(s1[len-1]))
		{
			printf("invalid input....please enter the string properly\n");
			getchar();
		}
		
		while (s1[i] != '\0')
		{
			if (s1[i] == '-')
			{
				if ((isdigit(s1[i - 1]) && !isdigit(s1[i + 1])) || (!isdigit(s1[i - 1]) && isdigit(s1[i + 1])))
				{
					flag = 1;
					printf("invalid input....please enter the string properly\n");
				}
				if ((isalpha(s1[i - 1]) && !isalpha(s1[i + 1])) || (!isalpha(s1[i - 1]) && isalpha(s1[i + 1])))
				{
					flag = 1;
					printf("invalid input....please enter the string properly\n");
				}
				if (s1[i + 1] == '-')
				{
					printf("invalid input....please enter the string properly\n");
					flag = 1;
				}
				if ((islower(s1[i - 1]) && !islower(s1[i + 1])) || (isupper(s1[i - 1]) && !isupper(s1[i + 1])))
				{
					flag = 1;
					printf("invalid input....please enter the string properly\n");
				}
				if ((int)(isdigit(s1[i - 1])) > (int)(isdigit(s1[i + 1])))
				{
					flag = 1;
					printf("invalid input ...please enter the string properly\n");
				}

			}
			else if (isalpha(s1[i]) || isdigit(s1[i]))
			{
				i++;
				continue;
			}
			else
			{

				printf("invalid input....please enter the string properly\n");
				break;
			}
				

			if (flag == 1)
				break;
			i++;
		}
		if(flag==0)
		expand(s1); //if valid input expanding
		getchar();
		return 0;
	}
}




