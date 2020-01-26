#include <iostream>
using namespace std;


int main() {

    cout << "Bikin Matriks Ordo 2x2 Nyoo!!" << endl;

    int angka[2][2];
    // Input Nilai
    cout << "Elemen (1,1) > "; cin >> angka[0][0];
    cout << "Elemen (1,2) > "; cin >> angka[0][1];
    cout << "Elemen (2,1) > "; cin >> angka[1][0];
    cout << "Elemen (2,2) > "; cin >> angka[1][1];
    cout << endl << endl;

   cout << "--- Hasil Matriks yang Anda buat ---" << endl;

   // Outputnya
   cout << "| " << angka[0][0] << " "  << angka[0][1] << " |" << endl;
   cout << "| " << angka[1][0] << " "  << angka[1][1] << " |" << endl;

}
