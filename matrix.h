#ifndef matrix_H
#define matrix_H

using namespace std;

class Matrix
{
private:
    int rowsize, colsize;
    double* values;
public:
    Matrix(int i, int j);
    ~Matrix();
    double get(int i, int j);
    Matrix product(Matrix m);
    Matrix product(double[][], int i, int j);
    Matrix product(int[][], int i, int j);
    Matrix add(Matrix m);
    Matrix add(double[][], int i, int j);
    Matrix add(int[][], int i, int j);
    Matrix asign(int i, int j, double value);
};




#endif
