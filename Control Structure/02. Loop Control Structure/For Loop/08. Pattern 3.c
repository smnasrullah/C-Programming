/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Pattern 3
                ****
                ***
                **
                *              
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
    int i,n,a;
    //user input
    printf("Enter row number:");
    scanf("%d",&a);
    
    for(n=1; n<=a; n++)
    {
       for (i=1; i<=a-n+1; i++)
           printf("*");
           
        printf("\n");
    }
}