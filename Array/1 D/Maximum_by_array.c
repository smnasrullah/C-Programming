
#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int data[n];

    printf("\nEnter %d integer(s)\n", n);
    for(i=0; i<n; i++)
        scanf("%d",&data[i]);

    int Max= INT_MIN;

    for(i=0; i<n; i++)
        if(Max< data[i]){
            Max=data[i];
        }
    printf("Maximum is %d",Max);
}
