#include<iostream>
using namespace std;

void func1(int** q) {
    q = q+1;
}

void func2(int** q) {
    *q = *q+1;
}

void func3(int** q) {
    **q = **q+1;
}


int main() {

    int a = 5;

    int* p = &a;

    int** q = &p;

    cout << &a << endl;                 //address(hexadicemal value)
    cout << a << endl;                  //5
    // cout << *a << endl;                  //error

    cout << &p << endl;                 //address of p
    cout << p << endl;                  //address of a
    cout << *p << endl;                 //5

    cout << &q << endl;                 //address of q
    cout << q << endl;                  // address of p
    cout << *q << endl;                 //address of a
    cout << **q << endl;                // 5

    cout << "before " << q << endl;     //address of p
    cout << "before " << *q << endl;    //address of a
    cout << "before " << **q << endl;   //5

    func1(q);

    cout << "after " << q << endl;      //address of p
    cout << "after " << *q << endl;     //address of a
    cout << "after " << **q << endl;    //6

    cout << "before " << q << endl;     //address of p
    cout << "before " << *q << endl;     //address of a
    cout << "before " << **q << endl;    //6

    func2(q);

    cout << "after " << q << endl;      //address of p
    cout << "after " << *q << endl;     //address of p+1
    cout << "after " << **q << endl;    //garbage value

    cout << "before " << q << endl;        //address of p
    cout << "before " << *q << endl;       //address of p+1
    cout << "before " << **q << endl;      //garbage value

    func3(q);

    cout << "after " << q << endl;         //address of p
    cout << "after " << *q << endl;        //address of p+1
    cout << "after " << **q << endl;       //garbage value





    cout << "Sab sahi chal rha h " << endl;   // Sab sahi chal rha h

    return 0;
}
