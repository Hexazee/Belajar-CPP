#include <iostream>
using namespace std;


   /* Menghitung Bidang Datar
      - Persegi
      - Persegi Panjang
      - Segitiga
      - Trapesium
      - Jajar Genjang
    */


double hasil;   // Global Scope


// Membuat fungsi Persegi
 double rumusPersegi(double s) {
        hasil = s * s;
        return hasil;
 }

// Fungsi Persegi Panjang
 double rumusPersegiPanjang(double p, double l) {
        hasil = p * l;
        return hasil;
 }


   int main() {

   double p,l,s;
   string pilihan,namaBidDat;

   cout << "--> List <-- \n";
   cout << "\n - Persegi\n - Persegi Panjang\n - Segitiga\n - Trapesium\n - Jajar Genjang\n \n ";

   cout << "Pilihlah yang diinginkan : ";
   cin >> namaBidDat;

   if(namaBidDat == "Persegi" || "persegi") {
      cout << "Panjang Sisi ? "; cin >> s;
      cout << "Hasil --> " << rumusPersegi(s) << endl;
   } else {
      cout << "Salah keyword" << endl;
   }


   cin.get();
   return 0;

}


