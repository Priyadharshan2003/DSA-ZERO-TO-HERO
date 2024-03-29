// C program to print the inverted left half pyramid pattern 
// of stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing white spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing star * 
		for (int k = 0; k < rows - i; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 

	return 0; 
}

// C program to print the inverted left half pyramid pattern 
// of numbers 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing white spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing numbers 
		for (int k = 0; k < rows - i; k++) { 
			printf("%d ", k + 1); 
		} 
		printf("\n"); 
	} 

	return 0; 
}

// C program to print the inverted left half pyramid pattern 
// of alphabets 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing white spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing alphabets 
		for (int k = 0; k < rows - i; k++) { 
			printf("%c ", 'A' + k); 
		} 
		printf("\n"); 
	} 

	return 0; 
}
