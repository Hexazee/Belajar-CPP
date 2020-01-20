#include <iostream>
using namespace std;


int main() {

    int myVar;
    int *PointerMyVAR = &myVar; // Address

    cout << "Masukan nilai : "; cin >> myVar;
    cout << "\n  Nilai myVar : " << myVar << endl;
    cout << "Address myVar : " << PointerMyVAR << endl;

    return 0;

}
