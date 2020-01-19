#include <iostream>
using namespace std;

// Default Argument / Nilai Standarnya

// Prototype Function
double volume_balok(double p = 20, double l = 12, double t = 10);


  int main() {

     cout << "Volume : " << volume_balok(5,5,5) << endl;
     cout << "Volume : " << volume_balok(5,5) << endl;
     cout << "Volume : " << volume_balok(5) << endl;
     /* Tidak perlu Parameter karena Variable p,l,t sudah memiliki nilai
        (itulah yang dinamakan Default Argument / Nilai Standarnya)
     */
     cout << "Volume : " << volume_balok() << endl;

     return 0;
}

double volume_balok(double p, double l , double t) {
       return p * l * t;
}
