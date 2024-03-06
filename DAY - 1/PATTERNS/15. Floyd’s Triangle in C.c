// C Program to print the Floyd's Triangle 
#include <stdio.h> 

int main() 
{ 
	int rows = 4; 
	int n = 1; 

	// outer loop to print all rows 
	for (int i = 0; i < rows; i++) { 

		// innter loop to print abphabet in each row 
		for (int j = 0; j <= i; j++) { 
			printf("%d ", n++); 
		} 
		printf("\n"); 
	} 
	return 0; 
}


// C Program to print the Floyd's Triangle of Alphabets 
#include <stdio.h> 

int main() 
{ 
	int rows = 4; 
	char n = 'A'; 

	// outer loop to print all rows 
	for (int i = 0; i < rows; i++) { 

		// innter loop to print abphabet in each row 
		for (int j = 0; j <= i; j++) { 
			printf("%c ", n++); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
