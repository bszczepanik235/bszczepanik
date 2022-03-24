#include <iostream>
using namespace std;

int main()
{
    int lp = 0;
    int p = 2;
    int n;
    int d;

    cout << "Ile liczb pierwszych chcesz wyswietlic: ";
    cin >> lp;

    while (lp < n){
        for (d = 2; p--;) {
            if (p % d == 0) {
                p++;
                cout << "Liczby pierwsze: " << p;
            }
            else {
                cout << "Liczby pierwsze: " << p;
            }
        }
        lp++;
        p++;
    }
}

