#include <iostream>
#include <string>

using namespace std;

struct Surat_Keterangan {
     string Nama;
     string TTL;   // Tempat Tanggal Lahir
     string NISN;
     string Kelas;
     string Nama_Ayah;
     string Alamat;

};


int main() {
    Surat_Keterangan Danang;

   cout << "                  SURAT KETERANGAN " << endl << endl;

    // Data Danang
    Danang.Nama = "Danang Hafidz Fadhillah";
    Danang.TTL = "Depok, 8 Mei 2003";
    Danang.NISN = "2030475020";
    Danang.Kelas = "X MIPA 1";
    Danang.Nama_Ayah = "Abdul Haris";
    Danang.Alamat = "Bulak Barat No.76 Kota Depok";

    cout << " Nama                 : " << Danang.Nama << endl;
    cout << " Tempat Tanggal Lahir : " << Danang.TTL << endl;
    cout << " NISN                 : " << Danang.NISN << endl;
    cout << " Kelas                : " << Danang.Kelas << endl;
    cout << " Nama Ayah            : " << Danang.Nama_Ayah << endl;
    cout << " Alamat               : " << Danang.Alamat << endl;

    return 0;

}
