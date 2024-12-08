
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

    int Min= INT_MAX;

    for(i=0; i<n; i++)
        if(Min > data[i]){
            Min=data[i];
        }
    printf("Minimum is %d",Min);
}
