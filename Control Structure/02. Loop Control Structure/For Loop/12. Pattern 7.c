/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Pattern 7
                   *
                  ***
                 *****
                *******
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
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
       for (i=1; i<=n-k; i++)
        {
            printf(" ");
        }
       for (j=1; j<=(k*2)-1; j++)
        {
            printf("*");
        }
       printf("\n");
    }
}