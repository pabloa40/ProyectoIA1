#define BOOST_TEST_MODULE iomatrix_test
#include <boost/test/unit_test.hpp>

#include "../IA1/iomatrix.h"

BOOST_AUTO_TEST_CASE(iomatrix)
{
    Matrix matrix = new Matrix(5,5);

    matrix.asign(3,3,3);

    writeMatrix(matrix,"prueba");

    Matrix matrix2 = readMatrix("prueba");

    int res1 = matrix.get(3,3);
    int res2 = matrix2.get(3,3);

    BOOST_CHECK_EQUAL(res1, res2);

}