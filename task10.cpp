#include<stdio.h>
#include<ctype.h>

int main()
{
	char username[21];
    int vowels = 0, consonants = 0;
    char alph,bet;

    printf("Enter username (up to 20 characters): ");
    scanf("%20s", username);
	for (int i=0; username[i]!= '\0';i++)
	{
		alph=username[i];
		 if (isalpha(alph))
		 {
		 	bet=tolower(alph);
		 
		 if (bet == 'a' || bet == 'e' || bet == 'i' || bet == 'o' || bet == 'u') {
                vowels++;
            } else {
                consonants++;
            }
       }
            username[i] = toupper(alph);
}
	
	 printf("\n--- Username Analysis ---\n");
    printf("Vowels count:     %d\n", vowels);
    printf("Consonants count: %d\n", consonants);
    printf("Stored Username:  %s\n", username);       
        
	
	
	return 0;
}



