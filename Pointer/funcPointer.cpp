#include <iostream>
using namespace std;

// Prototype pada Pointer
void funcPointer(int *);
void kuadrat(int *);

int main() {

   int x;

   cout << "Masukan Nilai : "; cin >> x;

   cout << "  Nilai dari x : " << x << endl;
   cout << "Address dari x : " << &x << endl;

   funcPointer(&x);
   kuadrat(&x);

   return 0;

}


void funcPointer(int *y) {
    cout << "  Nilai dari y : " << *y << endl;  // Deferencing
    cout << "Address dari y : " << y << endl;
}

void kuadrat(int *valPtr) {
     cout << "Hasil kuadrat : ";
     *valPtr = (*valPtr) * (*valPtr);
}
