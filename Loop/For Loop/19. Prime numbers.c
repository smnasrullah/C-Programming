/*
C-Programming
---------------------------------------------------------------------
Topic        : Loop- For Loop
Description  : Prime numbers within [m-n] range.
Programmer   : S. M. Nasrullah Hamim
                    hamim321182@gmail.com
Date         : 17/10/2024
---------------------------------------------------------------------
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n,flag;
    printf("Enter a number: ");
    scanf("%d",&m);
    printf("\nEnter a number: ");
    scanf("%d",&n);

    for(i=m;i<=n;i++)
    {
        flag=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
            printf("%d ",i);
    }
}
