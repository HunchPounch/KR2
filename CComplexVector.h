#pragma once
#include "Header.h"
#include <iostream>


class CComplexVector {

private:
    int** arr = NULL;
    int n;

public:

    CComplexVector(int dim);
    ~CComplexVector();

    int Get_Re(int i);
    int Get_Im(int i);

    void Set_Re_Im(int value_Re, int value_Im, int i);
    void print(int i);

    CComplexVector& operator =(const CComplexVector &other);
    friend CComplexVector operator +(CComplexVector &A, CComplexVector &B);
    friend CComplexVector operator -(CComplexVector &A, CComplexVector &B);
    friend CComplexVector operator *(CComplexVector &A, CComplexVector &B);



};

