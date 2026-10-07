#include<stdio.h>

int main()
{
float deposit, factor;
int years;

printf("enter deposit amount");
scanf("%f", &deposit);
printf("enter anual growth factor in percentage");
scanf("%f", &factor);
printf("enter number of years");
scanf("%d", &years);
float current=deposit;

for (int i=1; i<=years;i++)
{
	factor=(factor*current)/100;
	current=current+factor;
	printf("The money in year %d is: %f\n",i,current);

}
	
	
	
	return 0;
}
