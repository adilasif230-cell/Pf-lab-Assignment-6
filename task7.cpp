#include<stdio.h>

int main()

{
	int choice, food, removal, total=0;
	
	do
	{
		printf("Input 1 to add item\n");
		printf("Input 2 to remove item\n");
		printf("Input 3 to check total\n");
		printf("Input 4 to checkout\n");
		scanf("%d", &choice);
		
		switch (choice)
		{
			case 1:
				printf("Enter 1 for Biryani Rs.350\n");
				printf("Enter 2 for Haleem Rs.350\n");
				printf("Enter 3 for BBQ Rs.500\n");
				printf("Enter 4 for sandwich Rs.400\n");
				scanf("%d", &food);
				
				switch (food)
				{
					case 1:
						total=total+350;
					break;
					case 2:
						total=total+350;
					break;
					case 3:
						total=total+500;
					break;
					case 4:
						total=total+400;
						break;
					default:
						printf("Invalid input\n");
					
				
				}
			break;
			case 2:
			printf("Which item would you like to remove\n");
			printf("Enter 1 for Biryani Rs.350\n");
			printf("Enter 2 for Haleem Rs.350\n");
			printf("Enter 3 for BBQ Rs.500\n");	
			printf("Enter 4 for Sandwich Rs.400\n");
			scanf("%d", removal);
			
			switch (removal)
				{
					case 1:
						total=total-350;
					break;
					case 2:
						total=total-350;
					break;
					case 3:
						total=total-500;
					break;
					case 4:
						total=total-400;
						break;
					default:
						printf("Invalid input\n");
					
				
				}
			
			break;
			
			case 3:
				printf("Your current total is: %d\n", total);	
			break;
			
			case 4:
					printf("thanks for ordering, your total is: %d", total);	
			break;
			
			default:
					printf("Invalid Input");	
		
		}
	} while(choice!=4);
	
	
	return 0;
}
