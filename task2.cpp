#include<stdio.h>

int main()
{
	int n,marks,total=0,avg;
	printf("enter number of students\n");
	scanf("%d", &n);
	
	for (int i=1;i<=n;i++)
	{
		printf("enter marks for student %d",i);
	scanf("%d", &marks);
	total=total+marks;
	}
	avg=(total/n);
	
	printf("THe class total is: %d\n",total);
	printf("The Class average is: %d", avg);
	
	
	return 0;
}
