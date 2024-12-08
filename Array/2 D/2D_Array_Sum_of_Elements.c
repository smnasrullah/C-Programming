#include<stdio.h>
int main()
{
    int i,j,row,col,sum=0;
    scanf("%d%d", &row, &col);
    int mat [row][col];

    for(i=0 ; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d",&mat[i][j]);

    for(i=0 ; i<row; i++)
        for(j=0; j<col; j++)
            if (mat[i][j]%2==0)
             {sum=sum+mat[i][j];
        }
    printf("%d\n",sum);
}
