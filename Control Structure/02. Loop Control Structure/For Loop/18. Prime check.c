/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Prime Check
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 17/10/2024
---------------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i,N;
    printf("............PRIME CHECK............\n");
    //user input
    printf("Give a number: ");
    scanf("%d",&N);

    if(N<=0)
        printf("It is a negative number");
    else
    {
        for (i=2; i<N; ++i)
         {
            if(N%i==0)
               {
            printf("Not prime number\n");
            return 0;
               }
          }
        printf("Prime Number\n");
    }
}
