#include "matrix.h"
#include <stdexcept>



using namespace std;

Matrix::Matrix(int rows, int cols) : _rows(rows), _cols(cols)
{
    //values = new double[_rows][_cols];
    int totalvalues = _rows * _cols;
    values = (double**) malloc(sizeof(double)*_rows);

    for(int r=0; r< _rows; r++)
    {
        values[r]= (double*) malloc(sizeof(double)*_cols);
    }

    for(int i=0; i<_rows;i++)
    {
        for(int j=0; j<_cols; j++)
        {
            values[i][j]=0;
        }
    }
}

int Matrix::getCols()
{
    return _rows;
}

int Matrix::getRows()
{
    return _cols;
}

double Matrix::get(int row, int col)
{
    return values[row][col];
}
