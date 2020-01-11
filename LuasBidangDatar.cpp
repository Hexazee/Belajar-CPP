#include <iostream>
using namespace std;


   /* Menghitung Luas Bidang Datar
      - Persegi
      - Persegi Panjang
      - Segitiga
      - Trapesium
      - Jajar Genjang
    */


// Membuat fungsi Persegi
 double rumusPersegi(double s) {
        double  hasil = s * s;
        return hasil;
 }

// Fungsi Persegi Panjang
 double rumusPersegiPanjang(double p, double l) {
        double hasil = p * l;
        return hasil;
 }

// Fungsi Segitiga
 double rumusSegitiga(double alas, double tinggi) {
         double hasil = 0.5 * (alas * tinggi);
         return hasil;
 }

// Fungsi Trapesium
 double rumusTrapesium(double sisi, double tinggi) {
        double hasil = 0.5 * (sisi * tinggi);
        return hasil;
 }

// Fungsi Jajar Genjang
 double rumusJajarGenjang(double alas, double tinggi) {
        double hasil = alas * tinggi;
        return hasil;
 }

   int main() {

   double p,l,s,alas,tinggi,sisi;
   string namaBidDat;

   cout << "--> List <-- \n";
   cout << "\n - Persegi\n - Persegi Panjang\n - Segitiga\n - Trapesium\n - Jajar Genjang\n \n ";

   cout << "Pilihlah yang diinginkan : ";
   cin >> namaBidDat;

    if(namaBidDat == "Persegi" || namaBidDat == "persegi") {
      cout << " ---- Anda Memilih Persegi ---- \n";
      cout << "Panjang Sisi ? "; cin >> s;
      cout << "Hasil --> " << rumusPersegi(s) << endl;
      cout << "\nNOTICE!!!\n Rumus -> Sisi x Sisi \n\n";
    } else if(namaBidDat == "PersegiPanjang" || namaBidDat == "persegipanjang") {
           cout << " ---- Anda Memilih Persegi Panjang ---- \n";
           cout << "Panjang ? : "; cin >> p;
           cout << "Lebar ? : "; cin >> l;
           cout << "Hasil --> " << rumusPersegiPanjang(p,l) << endl;
           cout << "\nNOTICE!!!\n Rumus -> Panjang x Lebar \n\n";
      } else if(namaBidDat == "Segitiga" || namaBidDat == "segitiga") {
             cout << "---- Anda Memilih Segitiga ---- \n";
             cout << "Alas ? : "; cin >> alas;
             cout << "Tinggi ? : "; cin >> tinggi;
             cout << "Hasil --> " << rumusSegitiga(alas,tinggi) << endl;
             cout << "\nNOTICE!!!\n Rumus -> ½ x (Alas x Tinggi) \n\n";
        } else if(namaBidDat == "Trapesium" || namaBidDat == "trapesium") {
               cout << " ---- Anda Memilih Trapesium ---- \n";
               cout << "Panjang Sisi ? : "; cin >> sisi;
               cout << "Tinggi ? : "; cin >> tinggi;
               cout << "Hasil --> " << rumusTrapesium(sisi,tinggi) << endl;
               cout << "\nNOTICE!!!\n Rumus -> ½ x (Panjang Sisi x Tinggi) \n\n";
          } else if(namaBidDat == "JajarGenjang" || namaBidDat == "jajargenjang") {
                 cout << " ---- Anda Memilih Jajar Genjang ---- \n";
                 cout << "Panjang Alas ? : "; cin >> alas;
                 cout << "Tinggi ? : "; cin >> tinggi;
                 cout << "Hasil --> " << rumusJajarGenjang(alas,tinggi);
                 cout << "\nNOTICE!!!\n Rumus -> Alas x Tinggi \n\n";
            } else {
                 cout << "Salah Keyword!!!" << endl;

      }

   cin.get();
   return 0;

}


