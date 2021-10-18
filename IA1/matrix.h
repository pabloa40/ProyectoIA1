#ifndef matrix_H
#define matrix_H

using namespace std;

class Matrix
{
private:
    int _rows, _cols;
    double **values;
public:
    Matrix(int rows, int cols);
    //~Matrix();
    int getRows();
    int getCols();
    double get(int i, int j);
    Matrix product(Matrix m);
    Matrix product(double** v, int i, int j);
    Matrix product(int** v, int i, int j);
    Matrix add(Matrix m);
    Matrix add(double** v, int i, int j);
    Matrix add(int** v , int i, int j);
    Matrix asign(int i, int j, double value);
};




#endif