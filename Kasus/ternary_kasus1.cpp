#include <iostream>

using namespace std;


 int main() {

   // Ekspresi ? Nilai1 : Nilai2

   /* Contoh Kasus ketika seorang ingin menonton bioskop
     Jika umur 18 tahun, maka boleh Menonton. Dan jika tidak
     umur 18 tahun makan tidak boleh menonton. */

    int umur = 18;
    int x;
    string hasil;

    cout << "--> Persyaratan Nonton Bioskop! <--" << endl << endl;
    cout << "Umur Anda ? : ";
    cin >> x;

    hasil = x > umur ? "Selamat Menonton" : "Maaf anda tidak Cukup Umur!";
    cout << hasil << endl;

    return 0;


}
