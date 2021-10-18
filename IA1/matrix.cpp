#include "matrix.h"
#include <stdexcept>



using namespace std;

Matrix::Matrix(int rows, int cols) : _rows(rows), _cols(cols)
{
    //values = new double[_rows][_cols];

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

Matrix::Matrix(double** v, int rows, int cols): _rows(rows), _cols(cols)
{
    values = v;
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

void Matrix::asign(int row, int col, double value)
{
    values[row][col] = value;
}

Matrix Matrix::add(Matrix m)
{
    Matrix to_return(_rows,_cols);

    if((m.getCols()!=_cols) ||(m.getRows()!=_rows))
    {
        throw std::invalid_argument("This Matrix can't be added");
    }
    else{
        for(int i=0;i<_rows; i++)
        {
            for(int j=0; j< _cols; j++)
            {

                to_return.asign(i,j,values[i][j]+ m.get(i,j));
            }
        }
    }

    return to_return;
}

Matrix Matrix::product(Matrix m)
{
    Matrix to_return(_rows, m.getCols());

    double tr_v = 0;

    if(m.getRows()!=_cols)
    {
        throw std::invalid_argument("This Matrix can't be producted");
    }
    else{

        for(int i=0; i< _rows; i++)
        {
            for(int j=0; j<m.getCols(); j++)
            {
                tr_v=0;

                for(int k=0; k<_cols; k++)
                {
                    tr_v = tr_v + values[i][k]*m.get(k,j);
                }

                to_return.asign(i,j,tr_v);
            }
        }

    }

    return to_return;
}
