#ifndef matrix_H
#define matrix_H

#include<string>

using namespace std;

class Matrix
{
private:
    int _rows, _cols;
    double **values;
public:
    Matrix(int rows, int cols);
    Matrix(double** v,int rows, int cols);
    //~Matrix();
    int getRows();
    int getCols();
    double get(int row, int col);
    Matrix product(Matrix m);
    Matrix product(double** v, int rows, int cols);
    Matrix product(int** v, int i, int j);
    Matrix add(Matrix m);
    Matrix add(double** v, int i, int j);
    Matrix add(int** v , int i, int j);
    void asign(int row, int col, double value);
    string toString();
};




#endif
