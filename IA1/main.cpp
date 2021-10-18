#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{


    Matrix a(5,4);

    cout<< a.getRows()<<" "<<a.getCols()<<" "<<a.get(0,0) << " "<< a.get(4,3);


    return 0;
}
