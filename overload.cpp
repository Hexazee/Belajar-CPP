#include <iostream>
using namespace std;


// Fungsi Utama
int persegiPanjang(int p, int l) {
    return p * l;
}

// Fungsi Overload
double persegiPanjang(double p = 7.5, double l = 3.333) {
    return p * l;
}

  int main() {

      cout << "Luas dari 10 x 5 = " << persegiPanjang(10,5) << endl;
      cout << "Luas dari 7.5 x 3.333 = " << persegiPanjang() << endl;

  return 0;

}
