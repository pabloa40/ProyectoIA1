#include "iomatrix.h"
#include <fstream>

Matrix readMatrix(string file)
{

    Matrix matrix(0,0);
    fstream f_saved;
    f_saved.open(file, ios::in|ios::binary);
    if(f_saved)
    {


        f_saved.read((char*) &matrix,sizeof(matrix));

        f_saved.close();

    }

        return matrix;
    
}

bool writeMatrix(Matrix matrix, string file)
{
    fstream f_save;
    f_save.open(file, ios::out|ios::binary);
    if(f_save)
    {

        f_save.write((char*) &matrix,sizeof(matrix));

        f_save.close();

        return true;

    }
    else{
        return false;
    }
}


/*
Matrix readMatrix(string file)
{
    fstream f_saved;
    f_saved(file, ios::in);

    int rows = f_saved.get(int);
    int colums = f_saved.get(int);
}
*/


/*
bool writeMatrix(Matrix matrix, string file)
{
    fstream f_save;
    f_save.open(file, ios::out|ios::binary);
    if(f_save)
    {
        int columns = matrix.getCols();
        int rows = matrix.getRows();
        f_save.write(rows);
        f_save.write(columns);

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j< columns; j++)
            {
                f_save.write(matrix.get(i,j));
            }
        }



        f_save.close();

        return true;
    }
    else{
        return false;
    }
}
*/