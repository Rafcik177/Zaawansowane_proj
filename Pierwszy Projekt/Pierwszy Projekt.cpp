#include <iostream>

using namespace std;

int main()
{
    float a, b, x0;
    cout << "Obliczanie miejsca zerowego f. liniowej! (a =/= 0)" << endl;
    cout << "Podaj a: "; cin >> a;
    cout << "Podaj b: "; cin >> b;
    if (a != 0)
    {
        x0 = -b / a;
        cout << "Miejsce zerowe: " << x0;
    }
    else {
        if (b == 0)
            cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
        else
            cout << "Funkcja nie ma miejsc zerowych" << endl;
    }

}
