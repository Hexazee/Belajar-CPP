#include <iostream>
#include <string>
using namespace std;


int main() {

    string username;
    string password("Mikir Sendiri");
    // substr(index,panjang)
    // search Password
    string pembanding = password.substr(10,3);

    while(true) {
          cout << "Username : "; cin >> username;
          cout << "Password : "; cin >> password;

    if(password == pembanding) {
      cout << "\nSelamat Datang " << username << endl;
          break;
      } else {
          cout << "Wrong Password!!!" << endl;
     }

    }
    return 0;

}
