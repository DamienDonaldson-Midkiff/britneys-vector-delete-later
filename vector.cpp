//
// Created by Carlos R. Arias on 4/3/24.
//

#include "vector.h"

#include <cmath>
#include <sstream>

using std::stringstream;

Vector::Vector(size_t size, double *data): _size(size) {
    _data = new double[_size];
    for (int i = 0; i < _size; ++i) {
        _data[i] = data[i];
    }
}

Vector::Vector(const Vector &other):_size(other._size) {
    _data = new double[_size];
    for (int i = 0; i < _size; ++i) {
        _data[i] = other._data[i];
    }
}

Vector::~Vector() {
    delete[] _data;
}

const Vector &Vector::operator=(const Vector &rhs) {
    delete[] _data;
    _size = rhs._size;
    _data = new double[_size];
    for (int i = 0; i < _size; ++i) {
        _data[i] = rhs._data[i];
    }
    return *this;
}

double Vector::DotProduct(const Vector &rhs) const {
    double retVal = 0;
    if (_size != rhs._size)
        exit(1);
    for (int i = 0; i < _size; ++i) {
        retVal += _data[i] * rhs._data[i];
    }
    return 0;
}

const Vector Vector::Sum(const Vector &rhs) const {
    if (_size != rhs._size)
        exit(1);
    double* tmp = new double[_size];
    for (int i = 0; i <_size; ++i) {
        tmp[i] = _data[i] + rhs._data[i];
    }
    Vector retVal(_size, tmp);
    delete[] tmp;
    return retVal;
}

const Vector Vector::Sub(const Vector &rhs) const {
    if (_size != rhs._size)
        exit(1);
    double* tmp = new double[_size];
    for (int i = 0; i <_size; ++i) {
        tmp[i] = _data[i] + rhs._data[i];
    }
    Vector retVal(_size, tmp);
    delete[] tmp;
    return retVal;
}

const Vector Vector::ScalarMultiplication(double value) const {
    Vector retVal(_size, _data);
    for (int i = 0; i < _size; ++i) {
        retVal._data[i] *= -1;
    }
    return retVal;
}

string Vector::ToString() const {
    stringstream ss;
    ss << "[";
    for (int i = 0; i < _size; ++i) {
        if (i != _size - 1) // not last
            ss << _data[i] << ", ";
        else
            ss << _data[i] << "]";
    }
    return ss.str();
}

bool Vector::Equals(const Vector &rhs) const {
    if (_size != rhs._size)
        return false;
    for (int i = 0; i < _size; ++i) {
        if (_data[i] != rhs._data[i])
            return false;
    }
    return true;
}

double Vector::Distance(const Vector &rhs) const {
    if (_size != rhs._size)
        exit(1);

    double sum = 0.0;
    for (int i = 0; i < _size; ++i) {
        sum += pow(_data[i] - rhs._data[i], 2.0);
    }

    return sqrt(sum);
}
