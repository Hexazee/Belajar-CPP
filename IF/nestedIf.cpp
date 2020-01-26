#include <iostream>
using namespace std;

int main() {

    string username, password;

    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;


    if(username == "Hexa_D") {
       if(password == "Skuy") {
          cout << "Selamat Datang!!!" << endl;
       } else {
            cout << "Password yang anda masukan Salah!!!" << endl;
         }
    } else {
          cout << "Mungkin anda Belum terdaftar!!!" << endl;
      }

    return 0;

}
