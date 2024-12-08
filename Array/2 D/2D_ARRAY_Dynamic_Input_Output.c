#include<stdio.h>
int main()
{
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &row, &col);
    int mat [row][col];

    printf("Enter the elements of matrix\n");
    for(i=0 ; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d",&mat[i][j]);

    printf("Output matrix\n");
    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d  ",mat[i][j]);
        printf("\n");
    }
}
