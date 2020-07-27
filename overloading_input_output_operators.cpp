#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	friend ostream& operator<< (ostream& ekran, Complex &c1);
	friend istream& operator>> (istream& klavye, Complex &c1);

};

ostream& operator << (ostream& ekran, Complex& c1)
{
	ekran << c1.real;
	ekran << "+i" << c1.imag << endl;
	return ekran;
}

istream& operator >> (istream& klavye, Complex& c1)
{
	cout << "Enter real part";
	klavye >> c1.real;
	cout << "Enter imagenory part";
	klavye >> c1.imag  ;
		return klavye;
}

int main()
{
	Complex c1;
	cin >> c1;
	cout << "The complex object is ";
	cout << c1;
	return 0;
}
