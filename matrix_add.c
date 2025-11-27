#include<stdio.h>

int main()
{
    int row,column;

    printf("Enter the row of the matrix: ");
    scanf("%d",&row);

    printf("Enter the column of the matrix: ");
    scanf("%d",&column);

    int matrix1[row][column];
    int matrix2[row][column];
    int sum[row][column];
    printf("matrix1\n");
    for(int i=0;i<row;i++)
        {
            printf("for the row %d\n",i+1);
            for(int j=0;j<column;j++)
            {
                printf("Enter value for column %d: ",j+1);
                scanf("%d",&matrix1[i][j]);
            }
            printf("\n");
        }
        printf("matrix2\n");
        for(int i=0;i<row;i++)
        {
            printf("for the row %d\n",i+1);
            for(int j=0;j<column;j++)
            {
                printf("Enter value for column %d: ",j+1);
                scanf("%d",&matrix2[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        printf("Resultant matrix: \n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                printf("  %d  ",sum[i][j]);
            }
            printf("\n");
        }
        return 0;    
}