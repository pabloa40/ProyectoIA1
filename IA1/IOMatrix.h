#ifndef IOmatrix_H
#define IOmatrix_H

#include "matrix.h"

Matrix readMatrix(string file);

bool writeMatrix(Matrix matrix, string file);

#endif