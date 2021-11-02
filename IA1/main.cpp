#include "iomatrix.h"
#include <iostream>

using namespace std;

int main()
{


    Matrix a(5,4);

    cout<< a.toString()<<"\n\n";

    a.asign(0,0,1);
    a.asign(3,1,3);

    cout<< a.toString()<<"\n\n";

    Matrix b(4,7);

    b.asign(0,0,1);
    b.asign(1,3,7);

    writeMatrix(a, "prueba.matrix");

    Matrix c = readMatrix("prueba.matrix");

    cout<< a.toString();
    cout<<c.toString();

    cout<< a.product(b).toString();




    return 0;
}
