#include <iostream>
using namespace std;

int BinarneWyszukiwanie(int szukana)
{
	
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	int l = 0;
	int p = 15;
	int srodkowyElement = (l + p) / 2;

	while (l <= p) 
	{
		if (tab[srodkowyElement] == szukana) {
			return srodkowyElement;
		}
		else if (tab[srodkowyElement] > szukana) {
			p = srodkowyElement - 1;
		}
		else if (tab[srodkowyElement] < szukana) {
			l = srodkowyElement + 1;
		}

		srodkowyElement = (l + p) / 2;
	}

	return -1;
}

int main() 
{
	int liczbaSzukana, pozycjaLiczby;

	cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> liczbaSzukana;

	pozycjaLiczby = BinarneWyszukiwanie(liczbaSzukana);
	cout << "Liczba " << liczbaSzukana << " wystepuje w zbiorze w komorce o indeksie " << pozycjaLiczby;
}