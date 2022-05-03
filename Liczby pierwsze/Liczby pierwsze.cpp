#include <iostream>
using namespace std;

int main()
{
	int n, lp, p;
	bool t;

	cout << "Ile liczb pierwszych chcesz wyswietlic?: ";
	cin >> n;

	lp = 0;
	p = 2;

	while (lp < n) {
		
		t = true;
		for (int i = 2; i < p; i++) 
			if (p % i == 0)
			{
				t = false;
				break;
			}

		if (t) {
			cout << p << " ";
			lp++;
		}
		p++;
	}

	cout << endl;
	return 0;
}




