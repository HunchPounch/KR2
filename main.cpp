#include "Header.h"
#include "test.h"


CComplexVector function1(int n){

    CComplexVector A(n);
    CComplexVector B(n);
    CComplexVector C(n);
    int val_Re;
    int val_Im;
    for(int i=0; i<n;i++){
        cout << "Enter Re of the " << i+1 << "th coordinate of the first vector"  << endl;
        cin >> val_Re;
        cout << "Enter Im of the " << i+1 << "th coordinate of the first vector"  << endl;
        cin >> val_Im;
        A.Set_Re_Im(val_Re, val_Im, i);
    }
    cout << "///" << endl;
    for(int i=0; i<n;i++){
        cout << "Enter Re of the " << i+1 << "th coordinate of the second vector"  << endl;
        cin >> val_Re;
        cout << "Enter Im of the " << i+1 << "th coordinate of the second vector"  << endl;
        cin >> val_Im;
        B.Set_Re_Im(val_Re, val_Im, i);
    }
    cout << endl << endl;
    C = A + B;
    return C;

}

CComplexVector function2(int n){
    CComplexVector C(n);
    CComplexVector A(n);
    CComplexVector B(n);
    int val_Re;
    int val_Im;
    for(int i=0; i<n;i++){
        cout << "Enter Re of the " << i+1 << "th coordinate of the first vector"  << endl;
        cin >> val_Re;
        cout << "Enter Im of the " << i+1 << "th coordinate of the first vector"  << endl;
        cin >> val_Im;
        A.Set_Re_Im(val_Re, val_Im, i);
    }
    cout << "///" << endl;
    for(int i=0; i<n;i++){
        cout << "Enter Re of the " << i+1 << "th coordinate of the second vector"  << endl;
        cin >> val_Re;
        cout << "Enter Im of the " << i+1 << "th coordinate of the second vector"  << endl;
        cin >> val_Im;
        B.Set_Re_Im(val_Re, val_Im, i);
    }
    cout << endl << endl;
    C = A - B;
    return C;

}
pair<int,int> function3(int n){
    //CComplexVector C(n);
    pair<int, int> c;
    CComplexVector A(n);
    CComplexVector B(n);
    int val_Re;
    int val_Im;
    for(int i=0; i<n;i++){
        cout << "Enter Re of the " << i+1 << "th coordinate of the first vector"  << endl;
        cin >> val_Re;
        cout << "Enter Im of the " << i+1 << "th coordinate of the first vector"  << endl;
        cin >> val_Im;
        A.Set_Re_Im(val_Re, val_Im, i);
    }
    cout << "///" << endl;
    for(int i=0; i<n;i++){
        cout << "Enter Re of the " << i+1 << "th coordinate of the second vector"  << endl;
        cin >> val_Re;
        cout << "Enter Im of the " << i+1 << "th coordinate of the second vector"  << endl;
        cin >> val_Im;
        B.Set_Re_Im(val_Re, val_Im, i);
    }
    cout << endl << endl;
    c = A * B;
    return c;

}

int main()
{
    if(main_test() == 1){
        cout << "tests not passed" << endl << endl;
        return 1;
    }

    else cout << "tests passed" << endl << endl;
    int n = 0;
    pair<int, int> res;
    cout << "Enter dimension of the space:" << endl;
    cin >> n;
    if(n == 0){
        cout << "please, enter dimension greater than zero" << endl;
        return -1;
    }
    CComplexVector A(n);
    int num = 8;
    while(1){

        cout << "Select next number:" << endl;
        cout << "1 --- A + B" << endl;
        cout << "2 --- A - B" << endl;
        cout << "3 --- A * B" << endl;
        cout << "4 --- exit" << endl << endl;

        cin >> num;
        if(num == 1){
            A = function1(n);
            cout << "(";
            for(int i=0;i<n;i++){
                A.print(i);
                if(i != n-1){
                    cout << ", ";
                }
            }
            cout << ")" << endl << endl;
            continue;
        }
        if(num == 2){
            A = function2(n);
            cout << "(";
            for(int i=0;i<n;i++){
                A.print(i);
                if(i != n-1){
                    cout << ", ";
                }
            }
            cout << ")" << endl << endl;
            continue;
        }

        if(num == 3){
            res = function3(n);
            /*cout << "(";
            for(int i=0;i<n;i++){
                A.print(i);
                if(i != n-1){
                    cout << ", ";
                }
            }
            cout << ")" << endl << endl;*/

            cout << res.first << " + " << res.second << "i"<< endl;
            continue;
        }

        if(num == 4){
            break;
        }
        if(num != 1 && num != 2 && num != 3 && num != 4){
            cout << "incorrect input";
            break;
        }

    }

    return 0;
}
