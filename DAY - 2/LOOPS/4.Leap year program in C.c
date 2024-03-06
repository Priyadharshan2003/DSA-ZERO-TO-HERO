#include<stdio.h>  
#include<conio.h>  
void main() {  
    int startYear, endyear, i;  
    printf ("Enter a year to start searching the leap years: ");  
    scanf ("%d", &startYear);  
    printf ("Enter a year to end the search of leap years: ");  
    scanf ("%d", &endyear);  
    printf ("Leap Years between %d to %d are: \n", &startYear, &endYear);  
    for (i= startYear; i<= endYear, i++)   
    {  
         if(((i%4==0) && ((i%400==0) || (i%100!==0))  
         {  
          printf("%d \n", &i);  
         }   
    }  
    getch();  
}  