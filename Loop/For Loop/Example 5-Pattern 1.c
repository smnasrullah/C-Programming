/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Pattern 1
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
    int i,j,n;
    printf("Give row number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}