#include<stdio.h>

int main()
{
	int stock[10]={10,40,90,80,30,55,67,98,118,2};
	int in;
	for (int i=9;i>=0;i--)
	{
			printf("The stock value in shelf %d is: %d\n", i+1,stock[i]);
	}
		printf("Input stock amount:\n");
		scanf("%d", &in);
		 for (int x=0;x<10;x++)
		 {
		 	if (in==stock[x])
		 	{
		 			printf("The stock exists in shelf %d\n",x+1);
			 }
			else
			{
					printf("Item stock does not exist in shelf %d\n", x+1);
			 } 
		 }
	
	return 0;
}
