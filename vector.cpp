//
// Created by Carlos R. Arias on 4/3/24.
//

#include "vector.h"


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
    return 0;
}

const Vector Vector::Sum(const Vector &rhs) const {
    return Vector(0, nullptr);
}

const Vector Vector::Sub(const Vector &rhs) const {
    return Vector(0, nullptr);
}

const Vector Vector::ScalarMultiplication(double value) const {
    return Vector(0, nullptr);
}

string Vector::ToString() const {
    return std::string();
}

bool Vector::Equals(const Vector &rhs) const {
    return false;
}

double Vector::Distance(const Vector &rhs) const {
    return 0;
}
