#include <iostream> 
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int puan;
	cout << "Puanı gir:";
	cin >> puan;
	if (puan >= 85)
		cout << "Puan 85'ten büyük ve yeterli \n";
	else
		cout << "Puan 85'ten küçük ve yetersiz \n";

}
