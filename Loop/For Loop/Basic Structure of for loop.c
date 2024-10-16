/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Basic structure of for lopp
Programmer   : S. M. Nasrullah Hamim
               hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i;
    /*
    for( initialization; test-condition; increment)
       {
         body of the loop
       }
    */

    for(i=1; i<=10; i++)
    {
        printf("%d\n", i);
    }
}