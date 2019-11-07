#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Bir tek sayi giriniz:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int y, b;
		if (i <= n / 2) {
			y = 2 * i + 1;
		}
		else
		{
			y = 2*(n - i-1) + 1;
		}
		b = (n - y) / 2;
		for (int j = 0; j < b; j++)
			cout << " ";
		for (int j = 0; j <y; j++) {

			cout << "*";
         }
		cout << endl;

	
	
	}

		

	}


