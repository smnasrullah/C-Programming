/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Odd numbers of n terms and sum
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    //user input
    printf("Input number of terms:");
    scanf("%d", &n);
    printf("\nThe odd numbers are :\n");

    for(i=1;i<=n;i++)
    {
       printf("%d ", 2*i-1);
       sum= sum+i;
    }
    printf("\n\nThe Sum of odd Natural Number up to %d terms : %d\n",n,sum);
}