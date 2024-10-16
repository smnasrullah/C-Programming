/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Pattern 4
                   *
                  **
                 ***
                ****
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
    int i,n,j,x;
    //user input
    printf("Give row number:");
    scanf("%d",&x);

    for(n=1; n<=x; n++)
    {
       for (i=1; i<=x-n; i++)
        {
            printf(" ");
        }
       for (j=1; j<=n; j++)
        {
            printf("*");
        }

       printf("\n");
    }
}