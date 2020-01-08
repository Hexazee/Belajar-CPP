#include <iostream>

using namespace std;

int main() {

    int x,y;
    int hasil_AND, hasil_OR, hasil_NOT, hasil_SLFT, hasil_SRGHT, hasil_XOR;

    cout << "Masukan Nilai Pertama : ";
    cin >> x;
    cout << "Masukan Nilai Kedua : ";
    cin >> y;
    cout << endl;

    //Operator Bitwise
    hasil_AND = x & y;
    cout << "Hasil dari OprBIT AND = " << hasil_AND << endl;
    hasil_OR = x | y;
    cout << "Hasil dari OprBIT OR = " << hasil_OR << endl;
    hasil_NOT = ~(x & y);
    cout << "Hasil dari OprBIT NOT = " << hasil_NOT << endl;
    hasil_XOR = x ^ y;
    cout << "Hasil dari OprBIT XOR = " << hasil_XOR << endl;
    cout << endl;

    int z,o;
    cout << "->> Shift Left & Shift Right <<-" << endl;
    cout << "Mau di Geser Berapa? : ";
    cin >> z;
    hasil_SLFT = (x & y) << z;
    cout << "Hasil ShiftLeft = " << hasil_SLFT << endl;

    cout << "Mau di Geser Berapa? : ";
    cin >> o;
    hasil_SRGHT = (x & y) >> o;
    cout << "Hasil ShiftRight = " << hasil_SRGHT << endl;

  return 0;

}
