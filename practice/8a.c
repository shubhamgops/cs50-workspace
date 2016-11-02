//matrix function variable length array
#include<stdio.h>
void transposeMatrix(int nRows, int nCols,int matrix[nRows][nCols],int tmatrix[nCols][nRows])
{
    int row,col;
    for(row = 0; row < nRows; row++)
        for(col=0; col <nCols; col++)
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
    transposeMatrix(4,5,matrix,tmatrix);
    displayMatrix(5,4,tmatrix);
}
