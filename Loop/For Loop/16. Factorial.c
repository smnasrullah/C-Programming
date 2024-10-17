/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Factorial of a number
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 17/10/2024
---------------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long int fact = 1;
    printf("Enter an integer number:");
    scanf("%d",&n);
    //shows error if the user enters a negative integer
    if(n<0)
        printf("Error! Factorial of a negative number does not exist.");
    else{
        for(i=n; i>=1;i--)
            fact *=i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
}