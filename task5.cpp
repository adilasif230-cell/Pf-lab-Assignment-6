#include<stdio.h>

int main()
{
	int level,hours=0;
	printf("Enter initial water level");
	scanf("%d", &level);
	
	while (level>1)
	{
		if (level % 2==0)
		{
			level=level/2;
			
		}
		else
		 {
		 	level=(level*3)+1;
			
		}
		
		hours=hours+1;
		printf("The water level at hour %d is: %d\n",hours,level);
	
	
	
	}
	printf("It took %d hours to reach 1 liter \n",hours);
	
	return 0;
}
