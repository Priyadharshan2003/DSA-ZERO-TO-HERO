// C program to print alphabets
#include <stdio.h>

// Function to print the alphabet
// in lower case
void lowercaseAlphabets()
{
	// for lowercase
	for (int c = 97; c <= 122; ++c)
		printf("%c ", c);
	printf("\n");
}
// Function to print the alphabet
// in upper case
void uppercaseAlphabets()
{

	// Run a loop from 65 to 90
	for (int c = 65; c <= 90; ++c)

		// print its ascii values
		printf("%c ", c);

	printf("\n");
}

// Driver program
int main()
{

	printf("Uppercase Alphabets\n");
	uppercaseAlphabets();

	printf("Lowercase Alphabets\n");
	lowercaseAlphabets();

	return 0;
}

// // JAVA program to print alphabet
// class Alpha {
// 	private int ch;

// 	void uppercaseAlphabets()
// 	{

// 		// uppercase
// 		for (char c = 65; c <= 90; ++c)
// 			System.out.print(" " + c);

// 		System.out.print("\n");
// 	}
// 	void lowercaseAlphabets()
// 	{

// 		// lowercase
// 		for (char c = 97; c <= 122; ++c)
// 			System.out.print(" " + c);

// 		System.out.print("\n");
// 	}

// 	// Driver program
// 	public static void main(String[] args)
// 	{
// 		int ch;
// 		System.out.println("Uppercase Alphabets");
// 		Alpha ob = new Alpha();
// 		ob.uppercaseAlphabets();

// 		System.out.println("Lowercase Alphabets ");
// 		ob.lowercaseAlphabets();
// 	}
// }

// # Python3 program to print alphabets

// # Function to print the alphabet
// # in lower case
// def lowercaseAlphabets():

// 	# lowercase
// 	for c in range(97, 123):
// 		print(chr(c), end = " ");

// 	print("");

// # Function to print the alphabet
// # in upper case
// def uppercaseAlphabets():

// 	# uppercase
// 	for c in range(65, 91):
// 		print(chr(c), end = " ");

// 	print("");

// # Driver code
// print("Uppercase Alphabets");
// uppercaseAlphabets();

// print("Lowercase Alphabets ");
// lowercaseAlphabets();

// # This code is contributed by mits

