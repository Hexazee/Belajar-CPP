#include <iostream>
using namespace std;

 /* - Jika Siswa Mendapat Nilai > 80, maka mendapatkan 'A'
    - Jika Siswa Mendapat Nilai diantara 70 dan 80, maka mendapatkan Nilai 'B'
    - Jika Siswa Mendapat Nilai diantara 50 dan 60, maka mendapatkan Nilai 'C'
    - Jika Siswa Mendapat Nilai < 40, maka mendapatkan 'D'
 */


int main() {

   char indeks;
   double nilai;

  cout << "Masukan Nilai : ";  cin >> nilai; // Input Nilai
   if(nilai >= 80) {
     indeks = 'A';
   } else if(nilai >= 70 && nilai < 80) {
          indeks = 'B';
     } else if(nilai >= 50 && nilai < 60) {
          indeks = 'C';
       } else if(nilai <= 40) {
           indeks = 'D';
        } else {
           cout << "Input Salah!" << endl;
          }

    cout << indeks << endl;

    return 0;

}
