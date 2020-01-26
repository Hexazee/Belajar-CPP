#include <iostream>
using namespace std;


// Contoh -> 5 Faktorial : 5 x 4 x 3 x 2 x 1 = 120


// Prototype
int myFaktorial(int n);


  int main() {
      int angka;

      cout << "Masukan Angka : "; cin >> angka;
      cout << "Hasil Faktorial dari " << angka << " -> " << myFaktorial(angka) << endl;

  return 0;

}

// Fungsi Faktorial
int myFaktorial(int n) {
    if (n <= 1) {
       cout << n << " = ";
       return n;
    } else {
       cout << n << " x ";
       return n * myFaktorial(n - 1);
    }

}


