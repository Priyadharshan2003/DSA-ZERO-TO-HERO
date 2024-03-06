//C
#include<stdio.h>  
#include<stdlib.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);       
a=a*b;//a=200 (10*20)    
b=a/b;//b=10 (200/20)    
a=a/b;//a=20 (200/10)    
 system("cls");  
printf("\nAfter swap a=%d b=%d",a,b);       
return 0;  
}   

//Java
import java.util.Scanner;

public class SwapVariables {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b;

        // Getting input from the user
        System.out.print("Enter the value of a: ");
        a = scanner.nextInt();

        System.out.print("Enter the value of b: ");
        b = scanner.nextInt();

        // Swapping without using an extra variable
        a = a + b;
        b = a - b;
        a = a - b;

        // Displaying the swapped values
        System.out.println("After swapping:");
        System.out.println("a = " + a);
        System.out.println("b = " + b);
    }
}

//Python
a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))

# Swapping without using an extra variable
a = a + b
b = a - b
a = a - b

# Displaying the swapped values
print("After swapping:")
print("a =", a)
print("b =", b)
