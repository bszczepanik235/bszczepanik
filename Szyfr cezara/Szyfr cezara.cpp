#include <iostream>

using namespace std;

void Cezar(char zdanie[], int Szyfr_cezara) 
{
	int i;

	if (Szyfr_cezara >= -26 && Szyfr_cezara <= 26) {
		int d = strlen(zdanie);
		if (Szyfr_cezara >= 0) {
			for (i = 0; i < d; i++) {
				if (zdanie[i] + Szyfr_cezara <= 'z') 
				{
					zdanie[i] += Szyfr_cezara;
				}
				else 
				{
					zdanie[i] = zdanie[i] + Szyfr_cezara - 26;
				}
			}
		}
		else if (Szyfr_cezara < 0) 
		{
			for (i = 0; i < d; i++) 
			{
				if (zdanie[i] + Szyfr_cezara >= 'a') 
				{
					zdanie[i] += Szyfr_cezara;
				}
				else 
				{
					zdanie[i] = zdanie[i] + Szyfr_cezara + 26;
				}
			}
		}
	}
	cout << zdanie;
}
int main() 
{
	char tab[1000];
	int klucz;
	cout << "Podaj wyraz skladajacy sie z malych liter: ";
	cin >> tab;

	cout << "Podaj klucz z przedzialu [-26..26]: ";
	cin >> klucz;

	cout << "Po zaszyfrowaniu: "; Cezar(tab, klucz);
	cout << endl;

	cout << "Po rozszyfrowaniu: "; Cezar(tab, -klucz);
}