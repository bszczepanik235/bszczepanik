#include <iostream>

using namespace std;

int main()
{
    int klucz, tab, dl, i = 0, z = 0, a = 0;

    cout << "Podaj wyraz skladajcy sie z malych liter: ";
    cin >> tab;

    cout << "Podaj klucz z przedialu [-26..26]: " << endl;
    cin >> klucz;

    dl = tab;

    if (-klucz >= -26 and klucz <= 26) {
     
    }

    if (klucz >= 0) {
        while (i < dl) {
            if (tab + klucz <= z) {
                tab += klucz;
            }
            else {
                tab = tab + klucz - 26;
            }
        }
    }
    else {
        while (i < dl) {
            if (tab + klucz >= a) {
                tab += klucz;
            }
            else {
                tab = tab + klucz + 26;
            }
        }
    }

    cout << "Po zaszyfrowaniu: " << -klucz << endl;
    cout << "Po rozszyfrowaniu: " << klucz << endl;

}
