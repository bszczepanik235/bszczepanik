#include <iostream>
using namespace std;
int funckja(int szukana, int tab[]);
int main()
{
	
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	int szukana;
	cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> szukana;
	funkcja(szukana, tab);
}

int funkcja(int szukana, int tab[]) 
{
	int l, p, sr;

	l = 0;
	p = 15;
	sr = (l + p) / 2;

	while (l <= p) {
		if (tab[sr] == szukana) {
			return sr;
		}

		if (tab[sr] > szukana) {
			p = sr - 1;
		}
		else {
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}

	return -1;
	cout << "Liczba " << szukana << "wystepuje w komorce o indeksie" << pozycja;
}