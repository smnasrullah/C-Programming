/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Mumtiolication table
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
    int a,b,sum;
    //user input
    printf("Give a positive integer number:");
    scanf("%d", &a);
    printf("_________________\n");

    for(b=1;b<11;b++)
    {
        sum=a*b;
        printf("%d X %d = %d\n", a,b,sum);
    }
}