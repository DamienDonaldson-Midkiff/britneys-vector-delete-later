//
// Created by Carlos R. Arias on 4/3/24.
//

#ifndef BRITNEYS_VECTOR_DELETE_LATER_VECTOR_H
#define BRITNEYS_VECTOR_DELETE_LATER_VECTOR_H

#include <string>
using std::string;

class Vector {
private:
    double* _data;
    size_t _size;
public:
    Vector(size_t size, double* data);
    Vector(const Vector& other);
    ~Vector();
    const Vector& operator=(const Vector& rhs);
    double DotProduct(const Vector& rhs)const;
    const Vector Sum(const Vector& rhs)const;
    const Vector Sub(const Vector& rhs)const;
    const Vector ScalarMultiplication(double value)const;
    string ToString()const;
    bool Equals(const Vector& rhs)const;
    double Distance(const Vector& rhs)const;
};


#endif //BRITNEYS_VECTOR_DELETE_LATER_VECTOR_H
