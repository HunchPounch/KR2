#include "CComplexVector.h"
#include <iostream>
using namespace std;


CComplexVector::CComplexVector(int dim){
        arr = new int*[dim];
        if(arr == NULL){
            exit(1);
        }
        for(int i = 0;i < dim; i++){
            arr[i] = new int[2]();
            if(arr[i] == NULL){
                exit(2);
            }
        }
        n = dim;
    }

CComplexVector::CComplexVector(const CComplexVector& other) {
    this->n = other.n;
    arr = new int* [this->n];
    if (arr == NULL) {
        exit(1);
    }
    for (int i = 0;i < this->n; i++) {
        arr[i] = new int[2]();
        if (arr[i] == NULL) {
            exit(2);
        }
    }
    
    for (int i = 0; i < this->n; i++) {
        this->arr[i][0] = other.arr[i][0];
        this->arr[i][1] = other.arr[i][1];
    }
    
}
CComplexVector::~CComplexVector(){


   for(int i=0; i<n; i++){
      delete[] arr[i];
   }

    delete[] arr;
}

int CComplexVector::Get_Re(int i) {
	return arr[i][0];
}
int CComplexVector::Get_Im(int i) {
	return arr[i][1];
}

void CComplexVector::Set_Re_Im(int value_Re, int value_Im, int i){

	arr[i][0] = value_Re;
	arr[i][1] = value_Im;

}
void CComplexVector::print(int i){
    cout << arr[i][0] << " + " << arr[i][1] << "i";
}

CComplexVector& CComplexVector::operator =(const CComplexVector &other){
    for(int i=0; i<this->n; i++){
        this->arr[i][0] = other.arr[i][0];
        this->arr[i][1] = other.arr[i][1];
    }
    return *this;
}

CComplexVector operator +(CComplexVector &A, CComplexVector &B){
    if (A.n != B.n)exit(2);
    CComplexVector C(A.n);

    for(int i=0;i<A.n; i++){
        C.Set_Re_Im(A.Get_Re(i)+B.Get_Re(i), A.Get_Im(i)+B.Get_Im(i),i);
    }
   
    return C;
}

CComplexVector operator -(CComplexVector &A, CComplexVector &B){
    if (A.n != B.n)exit(1);
    CComplexVector C(A.n);
    for(int i=0;i<A.n; i++){
        C.Set_Re_Im(A.Get_Re(i)- B.Get_Re(i), A.Get_Im(i) - B.Get_Im(i),i);
    }
    return C;
}

CComplexVector operator *(CComplexVector &A, CComplexVector &B){
    if (A.n != B.n)exit(3);
    CComplexVector C(A.n);
    for(int i=0;i<A.n; i++){
        C.Set_Re_Im(A.Get_Re(i)*B.Get_Re(i) - A.Get_Im(i)*B.Get_Im(i), A.Get_Re(i)*B.Get_Im(i) + A.Get_Im(i)*B.Get_Re(i),i );
    }
    return C;
}



