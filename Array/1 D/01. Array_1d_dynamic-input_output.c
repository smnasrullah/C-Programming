#include<stdio.h>
int main()
{
    int i,n,sum=0;

    scanf("%d",&n);
    int data[n];

    for(i=0; i<n; i++)
        scanf("%d",&data[i]);

    for(i=0; i<n; i++)
        sum = sum + data[i];

    printf("%d ",sum);
}
