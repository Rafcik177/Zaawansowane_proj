#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int wybor;
    cout << "======================================================"<<endl;
    cout << "Wybierz odpowiednia opcje:"<<endl;
    cout << "1. Obliczanie f. liniowej w postaci y=ax+b"<<endl;
    cout << "2. Obliczanie f. liniowej w postaci Ax+By+c=0"<<endl;
    cout << "3. Obliczanie f. kwadratowej w postaci ax^2+bx+c a=/=0"<<endl;
    cout << "======================================================" << endl;
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
    else if (wybor == 3)
    {
        float a,b,c,x1,x2,delta;
        cout << "Obliczanie f. kwadratowej w postaci ax^2+bx+c a=/=0!" << endl;
        cout << "Podaj A: "; cin >> a;
        cout << "Podaj B: "; cin >> b;
        cout << "Podaj C: "; cin >> c;
        if (a != 0)
        {
            delta = b * b - 4 * a * c;
            if (delta > 0)
            {
                x1 = (-b - sqrt(delta)) / (2 * a);
                x2 = (-b + sqrt(delta)) / (2 * a);
                cout << "Funkcja ma dwa miejsca zerowe:\n";
                cout << "x1: " << x1 << endl;
                cout << "x2: " << x2 << endl;
            }
            else if (delta == 0)
            {
                x1 = -b/ (2 * a);
                cout << "Funkcja ma tylko jedno miejsce zerowe:\n";
                cout << "x0: " << x1 << endl;
            }
            else cout << "Funkcja nie ma miejsc zerowych.\n";
        }
        else
        {
            cout << "To jest funkcja liniowa" << endl;
            if (b != 0)
            {
                x1 = -c / b;
                cout << "Miejsce zerowe: " << x1;
            }
            else {
                if (c == 0)
                    cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
                else
                    cout << "Funkcja nie ma miejsc zerowych" << endl;
            }
        }

    }
}
