#include <iostream>
using namespace std;

//RECURSIVE

void hanoi(int n, char src, char dest, char aux)
{
    if (n > 1)
    {
        hanoi(n - 1, src, aux, dest);
        hanoi(1, src, dest, aux);
        hanoi(n - 1, aux, dest, src);
    }
    else
        cout << "Ustteki diski tasi " << src << "'den " << dest << "'ye " << endl;
}


int main()
{
    int numDisk;
    cout << "Number or Disks:";
    cin >> numDisk;
    hanoi(numDisk, 'A', 'B', 'C');
}

