/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Cube of n natural numbers
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 16/10/2024
---------------------------------------------------------------------
*/
#include<stdio.h>
#include<math.h> //library function for pow
int main()
{
    int i,n, sum=0;//Variable diclaration
    //User input
    printf("Give a natural number =");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1)//Loop start
    {
       sum=pow(i,3);
       printf("Number is : %d and cube of the %d is :%d\n", i,i,sum);
    }//Loop end
}