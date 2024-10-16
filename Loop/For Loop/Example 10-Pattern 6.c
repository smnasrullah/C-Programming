/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Pattern 6
                   *
                  * *
                 * * *
                * * * *
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    // Declare variables
    int i,j,l,n;
    // Print a message to prompt user input.
    printf("Give row number:");
    scanf("%d",&n);// Read the value of 'n' from the user.

    // Start a loop to generate rows.
    for(i=1;i<=n;i++)
    {   // Loop to print spaces before the numbers.
        for(l=1;l<=n-i;l++)
        {
            printf(" ");
        }
        // Loop to print numbers based on the current
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}