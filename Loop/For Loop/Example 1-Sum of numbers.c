/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Sum of n natural numbers
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
    int i, n, sum=0; // Declare variables
    //User input
    printf("Give a natural number =");
    scanf("%d",&n); 

    for(i=1; i<=n; i=i+1)
    {
       sum=sum+i;
    }
    printf("%d",sum);
}