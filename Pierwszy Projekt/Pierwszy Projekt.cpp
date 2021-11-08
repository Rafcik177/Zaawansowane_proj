#include <iostream>

using namespace std;

int main()
{
    float a, b, x0;
    cout << "Obliczanie miejsca zerowego f. liniowej! (a =/= 0)" << endl;
powrot:
    cout << "Podaj a: "; cin >> a;
    if (a != 0)
    {
        cout << "Podaj b: "; cin >> b;
        x0 = -b / a;
        cout << "Miejsce zerowe: " << x0;
    }
    else {
        cout << "Wartosc a=/=0!" << endl;
        goto powrot;
    }

}
