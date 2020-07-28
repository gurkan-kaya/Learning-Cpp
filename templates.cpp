//Template'in yani şablonların kullanım amacı veri tipinden bağımsız fonksiyon tanımlayıp bunu fonksiyonu istediğimiz veri tipi ile işleme sokabilmektir. Örneği aşağıdaki gibidir.

#include <iostream>
#include <string>
using namespace std;

template<typename T>
void Yazdir(T yaz)
{   
    cout << yaz<<endl;
}

int main()
{
    int a = 5;
    float b = 5.7;
    bool c = true;
    string d = "Gurkan";
    double e = 8.6;

    Yazdir(a);
    Yazdir(b);
    Yazdir(c);
    Yazdir(d);
    Yazdir(e);
}
