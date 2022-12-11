#include <stdio.h>

int main ()
{
    int matrix[100][100];
    int matrix2[100][100];
    int row, column, i, j;
    scanf("%d %d", &row, &column);

    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    if(row == column){
        for(i=0; i<row; i++){
            for(j=0; j<column; j++){
                printf("%d ",matrix[i][j]+matrix2[i][j]);
            }
            printf("\n");
        }
    }
}
