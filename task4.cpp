#include<stdio.h>

int main()
{
	int i=0,sum=0, digits,x;
	int pass[digits];
	
	printf("How many digits is your password");
	scanf("%d",&digits);
	
	switch (digits)
	{
		case 4:
			digits=4;
		break;
		case 5:
			digits=5;
			break;
			case 6:
				digits=6;
				break;
				default:
					printf("password can only contain 4-6 digits");


	}
	
	while (i<digits)
	{
		printf(" Enter digit no. %d: ",i+1);
		scanf("%d", &pass[i]);
		sum=sum+pass[i];
		i++;
	}
	printf("The sum of digits is: %d\n",sum);
	printf("The reversed digits are:\n");
	
	x=digits-1;
	while (x>=0)
	{
		printf("%d",pass[x]);
		x--;
	}
printf("\n");

	return 0;
}
