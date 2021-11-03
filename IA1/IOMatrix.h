#ifndef IOmatrix_H
#define IOmatrix_H

#include "matrix.h"

/**
 * @brief loads a Matrix saved on a file.
 * 
 * @param file String of the file where is the matrix we want to load
 * @return Matrix returns the matrix saved on file if the load fails, it returns Matrix(0,0).
 */
Matrix readMatrix(string file);

/**
 * @brief saves a Matrix on a file.
 * 
 * @param matrix Matrix we want to save.
 * @param file String of the file where we want to save matrix.
 * @return true if everything is saved okey.
 * @return false if the file file isn't posible to open to save.
 */
bool writeMatrix(Matrix matrix, string file);

#endif