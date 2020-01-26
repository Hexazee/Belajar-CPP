#include <iostream>
using namespace std;

int main() {

    // Membuat array
    int value[7];

        value[0] = 0;
        value[1] = 1;
        value[2] = 2;
        value[3] = 3;
        value[4] = 4;
        value[5] = 5;
        value[6] = 6;

    cout << "Address : " << &value[0] << " Nilai : " << value[0] << endl;
    cout << "Address : " << &value[1] << " Nilai : " << value[1] << endl;
    cout << "Address : " << &value[2] << " Nilai : " << value[2] << endl;
    cout << "Address : " << &value[3] << " Nilai : " << value[3] << endl;
    cout << "Address : " << &value[4] << " Nilai : " << value[4] << endl;
    cout << "Address : " << &value[5] << " Nilai : " << value[5] << endl;
    cout << "Address : " << &value[6] << " Nilai : " << value[6] << endl;

    // Manpulasi Array
    value[0] = value[1] + value[5];
    value[6] = 100;
    cout << endl;
    cout << "Address : " << &value[0] << " Nilai : " << value[0] << endl;
    cout << "Address : " << &value[6] << " Nilai : " << value[6] << endl;

    cout << "Ukuran Array : " << sizeof(value) << endl;
    cout << "Jumlah Array : " << sizeof(value)/sizeof(int) << endl;

    return 0;

}
