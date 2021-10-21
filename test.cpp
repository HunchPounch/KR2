#include "test.h"
#include "Header.h"

int test1(){
    CComplexVector C(1);
    CComplexVector A(1);
	CComplexVector B(1);
	A.Set_Re_Im(0,0,0);
	B.Set_Re_Im(1,1,0);
	C = A + B;

	if(C.Get_Re(0) == 1 && C.Get_Im(0) == 1){
        cout << "test1 passed" << endl;
        return 0;
	}
	else {
        cout << "test1 not passed" << endl;
        return 1;
	}
}

int test2(){

    CComplexVector C(1);
    CComplexVector A(1);
	CComplexVector B(1);

	A.Set_Re_Im(0,0,0);
	B.Set_Re_Im(0,0,0);
	C = A - B;

	if(C.Get_Re(0) == 0 && C.Get_Im(0) == 0){
        cout << "test2 passed" << endl;
        return 0;
	}
	else {
        cout << "test2 not passed" << endl;
        return 1;
	}
}

int main_test(){
    if(test1() + test2() == 0){
        return 0;
    }
    else return 1;
}
