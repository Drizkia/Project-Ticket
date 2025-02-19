#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


struct data {
    string NIP;
    string pass;
};

int main () {
    data main;
    string NIPbenar = "1", passbenar = "1";
    int log = 3;

    while (log > 0) {
        cout << "Masukkan NIP : ";
            getline(cin, main.NIP);
        cout << "Masukkan Password : ";
            getline(cin, main.pass);

            if (main.NIP == NIPbenar && main.pass == passbenar) {
                cout << "Selamat Datang";
                getch();
                break;
            } else {
                log--;

            } if (log > 0) {
                cout << "Ayo coba lagi " << log << endl;
                system ("pause");
                system ("cls");
            } else {
                cout << "Bye bye";
                break;
                system ("pause");
            }
    }

    system ("cls");
    cout << "Haloo";
    return 0;
}