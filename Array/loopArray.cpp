#include <iostream>
#include <array>

using namespace std;

/* Bentuk Looping

   for(deklarasi variable : nama Array) {
      statement;
   }

*/

  int main() {

      array < int, 5 > valueArray = {0,1,2,3,4};

      for(int value : valueArray) {
         cout << "Address : " << &value << " > Nilai : " << value << endl;
         value = 10; // Tidak dapat di manipulasi(konstan)
      }

      // Manipulasi Array > syaratnya harus menggunakan Referencing
      cout << endl;
      for(int &valueRef : valueArray) {
         valueRef *= valueRef;
         cout << "Address : " << &valueRef;
         cout << " > Hasil Kuadrat dari Array : " << valueRef << endl;
      }

  return 0;

}
