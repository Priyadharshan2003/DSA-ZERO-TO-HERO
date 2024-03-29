// C program to print the inverted full pyramid pattern of stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing leading white 
		// spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing stars * 
		for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
}

// C program to print the inverted full pyramid pattern of numbers 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing leading white 
		// spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing numbers 
		for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
			printf("%d ", k + 1); 
		} 
		printf("\n"); 
	} 
}

// C program to print the inverted full pyramid pattern of 
// alphabets 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing leading white 
		// spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing alphabets 
		for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
			printf("%c ", 'A' + k); 
		} 
		printf("\n"); 
	} 
}
