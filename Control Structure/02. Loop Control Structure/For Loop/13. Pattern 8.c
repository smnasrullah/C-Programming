/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Pattern 8
                *******
                 *****
                  ***
                   *
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 17/10/2024
---------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    //user input
    printf("Give row number:");
    scanf("%d",&n);

    for(k=1; k<=n; k++)
    {
       for (i=1; i<k; i++)
        {
            printf(" ");
        }
       for (j=1; j<=((n*2+1)-(k*2)); j++)
        {
            printf("*");
        }
       printf("\n");
    }
}