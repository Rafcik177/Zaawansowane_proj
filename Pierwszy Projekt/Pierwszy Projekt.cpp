#include <iostream>

using namespace std;

int main()
{
    int wybor;
    cout << "Wybierz odpowiednia opcje:\n";
    cout << "1. Obliczanie f. liniowej w postaci y=ax+b"<<endl;
    cout << "2. Obliczanie f. liniowej w postaci Ax+By+c=0"<<endl;
    cin >> wybor;
    if (wybor == 1)
    {
        float a, b, x0;
        cout << "Obliczanie miejsca zerowego f. liniowej y=ax+b! (a =/= 0)" << endl;
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
    else if (wybor == 2)
    {
        float a, b, c, A, B, C, x0;
        cout << "Obliczanie miejsca zerowego f. liniowej Ax+By+c=0!" << endl;
        cout << "Podaj A: "; cin >> A;
        cout << "Podaj B: "; cin >> B;
        cout << "Podaj C: "; cin >> C;
        a = -A / B;
        c = -C / B;
        if (a != 0)
        {
            x0 = -c / a;
            cout << "Miejsce zerowe: " << x0;
        }
        else {
            if (c == 0)
                cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
            else
                cout << "Funkcja nie ma miejsc zerowych" << endl;
        }
    }
    

}
