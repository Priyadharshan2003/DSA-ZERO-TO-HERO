// C Program to print hollow square pattern using * star 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// outer loop to iterator through each row 
	for (int i = 0; i < rows; i++) { 

		// inner loop to print * star in each row 
		for (int j = 0; j < rows; j++) { 
			// statement to check boundry condition 
			if (i > 0 && i < rows - 1 && j > 0 
				&& j < rows - 1) { 
				printf(" "); 
			} 
			else { 
				printf("* "); 
			} 
		} 
		printf("\n"); 
	} 
	return 0; 
}

// C Program to print hollow square pattern using numbers 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// outer loop to iterator through each row 
	for (int i = 0; i < rows; i++) { 

		// inner loop to print number in each row 
		for (int j = 0; j < rows; j++) { 
			// statement to check boundry condition 
			if (i > 0 && i < rows - 1 && j > 0 
				&& j < rows - 1) { 
				printf(" "); 
			} 
			else { 
				printf("%d ", j + 1); 
			} 
		} 
		printf("\n"); 
	} 
	return 0; 
}

// C Program to print hollow square pattern using alphabet 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// outer loop to iterator through each row 
	for (int i = 0; i < rows; i++) { 

		// inner loop to print alphabet in each row 
		for (int j = 0; j < rows; j++) { 
			// statement to check boundry condition 
			if (i > 0 && i < rows - 1 && j > 0 
				&& j < rows - 1) { 
				printf(" "); 
			} 
			else { 
				printf("%c ", j + 'A'); 
			} 
		} 
		printf("\n"); 
	} 
	return 0; 
}
