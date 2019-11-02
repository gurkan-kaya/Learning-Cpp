#include <iostream> 
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int a, b, c;
	cout << "Birinci sayıyı giriniz:";
	cin >> a;
	cout << "İkinci sayıyı giriniz:";
	cin >> b;
	cout << "Üçüncü sayıyı giriniz:";
	cin >> c;
	if (b > a&& a > c || c > a&& a > b) //a'nın b ve c arasında olup olmadığını inceleyiniz (b>a>c olabilir veya c>a>b olabilir.)
		cout << "a, b ve c'nin arasındadır\n";
	else
		cout << "a, b ve c'nin arasında değildir\n";


	if (a == b && a < c)//a'nın b'ye eşit VE c'den küçük olup olmadığını inceleyiniz.
		cout << "a, b'ye eşit ve c'den küçüktür\n";
	else
		cout << "a, b'den farklı veya c'den küçük değildir\n";


	if (a > b || a > c)//a'nın b'den VEYA c'den büyük olup olmadığını inceleyiniz.
		cout << "a, b'den veya c'den büyüktür\n";
	else
		cout << "a, b'den ve c'den küçüktür veya eşittir\n";

	if (a == b && b == c)//a,b ve c'nin eşit olup olmadığını inceleyiniz.
		cout << "a,b ve c sayıları birbirlerine eşittir\n";
	else
		cout << "a,b ve c sayılarından en az biri farklıdır\n";
	return 0;

}
