#include <iostream>
using namespace std;

//int ikiliArama(int D[], int N, int Aranan)
//{
//    int Ortadaki, Sol = 0, Sag = N - 1;
//    while (Sol <= Sag)
//    {
//        Ortadaki = (Sol + Sag) / 2;
//        if (Aranan == D[Ortadaki])
//            return Ortadaki;
//        else if (Aranan > D[Ortadaki])
//            Sol = Ortadaki + 1;
//        else
//            Sag = Ortadaki - 1;
//    }
//    return -1;
//}
//
//int main()
//{
//    int indis, Ara, B[] = { 1,2,13,14,15,16,27,38,49,70 };
//    cout << "Aranan sayiyi girin: ";
//    cin >> Ara;
//    indis = ikiliArama(B, 10, Ara);
//    if (indis == -1)
//        cout << "Aranan sayi bulunamadi!";
//    else
//        cout << "Aranan sayi " << indis << " indisli elemandir.\n";
//
//    return 0;
//}

int main()
{
	int d[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int aranansayi;
	cin >> aranansayi;
	int eb = 9;
	int ek = 0;

	while (eb - ek >= 0)
	{
		int bakilanindis = (eb + ek) / 2;

		if (d[bakilanindis] == aranansayi)
		{
			cout << "Sayi bulundu";
			break;
		}

		else if (d[bakilanindis] < aranansayi)

		{
			ek = bakilanindis+1 ;
		}


		else
		{
			eb = bakilanindis-1;
		}
	}

		
	
}
