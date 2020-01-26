#include <iostream>
using namespace std;


int main() {

    int myVar;
    int *_Null = NULL;
    int *PointerMyVAR = &myVar; // Address

    cout << "Masukan nilai : "; cin >> myVar;
    cout << "\n  Nilai myVar : " << myVar << endl;
    cout << "Address myVar : " << PointerMyVAR << endl;
    cout << "\n Pointer Null : " << _Null << endl;

    return 0;

}
