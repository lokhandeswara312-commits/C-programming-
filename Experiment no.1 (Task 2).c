/*Name: Swara Lokhande
Class: F.E (Civil)
UIN: 251C043
DIV:B 
Roll no: 30*/

#include <stdio.h>

int main()
{
    float Physics, Chemistry, Mathematics, average;
    
    // Taking input from the user 
    printf("Enter marks in Physics");
    scanf("%f", &Physics);
    
    printf("Enter marks in Chemistry");
    scanf("%f", &Chemistry);
    
    printf("Enter marks in Mathematics");
    scanf("%f", &Mathematics);
    
    // Calculating average
    average = (Physics+Chemistry+Mathematics) / 3 ;
    
    // Using conditional operator to check eligibility 
    (average >= 50) ? printf("Average = %2f\nEligible for Admission\n",average):
                      printf("Average = %2f\nNot Eligible for Admission\n",average) ;
    
    return 0;                  
}

