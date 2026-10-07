#include<stdio.h>

int main()
{
	float marks;
	
	do
	{
	printf("Enter student's mark");
	scanf("%f", &marks);
	}while (marks<0 || marks>100);
	
	if (marks>=50){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
	return 0;
}
