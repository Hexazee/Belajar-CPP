#include <iostream>

using namespace std;


int main() {

    /*
       Seorang siswa dinyatakan tidak naik
       apabila Absensinya lebih dari 15
    */

   const int absensi = 15;
   int jumlahAbsensi;
   string keputusan;

   cout << "--> Keputusan Naik/Tidak seorang Siswa <--\n" << endl;
   cout << "Masukan Jumlah Absensi Siswa : ";
   cin >> jumlahAbsensi;

   keputusan = jumlahAbsensi >= absensi? "Anda tidak Naik Kelas" : "Anda Naik Kelas";
   cout << keputusan << endl << endl;

   return 0;

}

