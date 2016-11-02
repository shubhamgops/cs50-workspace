//matrix function
#include<stdio.h>
void transposeMatrix(int matrix[4][5],int tmatrix[5][4])
{
    int row,col;
    for(row = 0; row < 4; row++)
        for(col=0; col <5; col++)
            tmatrix[col][row] = matrix[row][col];
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
    int row, column;

    for(row =0; row <nRows; ++row){
        for(column = 0; column <nCols; ++column)
            printf("%5i", matrix[row][column]);
        printf("\n");
    }
}

int main(void)
{
    int matrix[4][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };
    int tmatrix[5][4];
    displayMatrix(4,5,matrix);
    printf("\n");
    transposeMatrix(matrix,tmatrix);
    displayMatrix(5,4,tmatrix);
}
