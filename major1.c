/* Program to get a number as an input and perform operations based on menu selection.
 * CSCE3600.001
 * Major Group Project 1
 * Date: 09/23/2019
 * Project Members: Aashish Nepal, Bikesh Hada, Binu Gaire, Sharan Sherpunja
 */

#include <stdio.h>
#include "major1.h" // Header file

// Main function
int main()
{	
	// Variables declaration
	int option = 0;		// Variable to make menu selection
	unsigned long long int number1;	// Number for operation
	int noOfBits = 0;	// Variable for rotate function
	
loop:		// loop for menu selection
	do
	{       
		if(option < 0 || option > 5)
		{
			printf("\nError: Invalid option. Please try again. ");		// Display error message if wrong menu option selection
		}
		// Display menu
		printf("\nEnter the menu option for the operation to perform: ");
		printf("\n (1) Count Leading Zeroes ");				
		printf("\n (2) Endian Swap ");
		printf("\n (3) Rotate-right ");
		printf("\n (4) Parity ");
		printf("\n (5) EXIT ");
		printf("\n");

		scanf("%d" , &option);		// Scan menu option value
	}
	while(option <= 0 || option > 5);
		
	switch(option)		// case switch for different function
	{	
		case 1:
		{
			do
			{
				printf("\n Enter a 32-bit number (>=1 and <= 4294967295, inclusively): ");
                        	scanf("%llu", &number1);				// Input number
			}
			while(number1 < 1 || number1 > 4294967295);		// Repeat until number meets required condition

			if(number1 >=1 && number1 <= 4294967295)
			{
                        	printf("\n The number of leading zeros in %llu is %d", number1, countLeadingZero(number1));        // Use count zero function
                        	printf("\n");

                        	goto loop;
			}
                }

		case 2:
		{	
			do
			{
				printf("\n Enter a 32-bit number (>=1 and <= 4294967295, inclusively): ");		
				scanf("%llu", &number1);								// Input number
			}
			while(number1 < 1 || number1 > 4294967295);		 // Repeat until number meets required condition
			
			if(number1 >=1 && number1 <= 4294967295)
			{
				printf("\n Endian swap of %llu gives %llu", number1, endianChange(number1));	// Use endian swap function
				printf("\n");
			
				goto loop;
			}	
       		}
		
		case 3:
		{	
			do
			{	
				printf("\n Enter a 32-bit number (>=1 and <= 4294967295, inclusively): ");	 // Input number
                        	scanf("%llu", &number1);
			}
			while(number1 < 1 || number1 > 4294967295);	 // Repeat until number meets required condition

			if(number1 >=1 && number1 <= 4294967295)
			{
				printf("\n Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
				scanf("%d", &noOfBits);								// Input rotation amount
			
                        	printf("\n %llu rotated by %d position gives: %llu", number1, noOfBits, rotate(number1, noOfBits));	// Use rotation swap function
                        	printf("\n");

                        	goto loop;
			}
                }

		case 4:
		{	
			do
			{
				printf("\n Enter a 32-bit number (>=1 and <= 4294967295, inclusively): ");	// Input number
                        	scanf("%llu", &number1);
			
			}
			while(number1 < 1 || number1 > 4294967295);	 // Repeat until number meets required condition

			if(number1 >=1 && number1 <= 4294967295)
			{ 	 
                        	printf("\n Parity of %llu gives %d", number1, parity(number1));			// Use parity function
                        	printf("\n");

                        	goto loop;
			}
                }

		case 5:
		{
			printf("\n Program terminating. Goodbye...\n");					// Exit program
			break;
		}
	}		
	return 0;	
}
