#include <iostream>
using namespace std;

int main()
{
    int lp = 0;
    int p = 0;
    int n = 2;
    int d = 2;

    cout << "Ile liczb pierwszych chcesz wyswietlic: ";
    cin >> lp;
    cout << endl << "Liczby pierwsze: ";

    while(lp < n){
        while(d < n){
            if(n % d == 0){
                d = 2;
                n++;
                break;
            }
            d++;
        }
    }
    if(d >= n){
        cout << n << ",";
        d = 2;
        n++;
        lp++;
    }

}

