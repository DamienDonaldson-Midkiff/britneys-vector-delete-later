#include "vector.h"
#include <iostream>
#include <cassert>

int main(){
    double data1[] = {1.0, -2.0, 3.5};
    Vector v1(3, data1);
    Vector negV1 = -v1;

    double expectedNeg[] = {-1.0, 2.0, -3.5};
    Vector expectedNegV1(3, expectedNeg);

    assert(negV1.Equals(expectedNegV1));
    std::cout << "Test operator-() passed!" << std::endl;

    // TEST VECTOR DAMIEN

double multipler = 2.0;
Vector scaledV1 = v1 * multipler;

double expectedScaled[] = {2.0, -4.0, 7.0};
Vector expectedScaledV1(3, expectedScaled);

assert(scaledV1.Equals(expectedScaledV1));
std::cout << "Test operator*(double) passed!" << std::endl;



    return 0;
}