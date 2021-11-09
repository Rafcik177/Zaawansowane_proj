#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int wybor;
    cout << "=======================================================" << endl;
    cout << "Wybierz odpowiednia opcje:" << endl;
    cout << "1. Obliczanie x0 f. liniowej w postaci y=ax+b" << endl;
    cout << "2. Obliczanie x0 f. liniowej w postaci Ax+By+c=0" << endl;
    cout << "3. Obliczanie x0 f. kwadratowej w postaci ax^2+bx+c a=/=0" << endl;
    cout << "4. Obliczanie x0 f. kwadratowej w postaci y=a(x-p)^2+q" << endl;
    cout << "==========================Ogolna=============================" << endl;
    cout << "5. Przeliczanie funkcji ogolnej na kanoniczna i iloczynowa z ax^2+bx+c" << endl;
    cout << "=======================Kanoniczna================================" << endl;
    cout << "6. Przeliczanie funkcji kanonicznej na ogolna i iloczynowa z a(x-p)^2+q" << endl;
    cout << "=======================Iloczynowa================================" << endl;
    cout << "7. Przeliczanie funkcji iloczynowej na ogolna i kanoniczna z a(x-p)^2+q" << endl;
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
        float a, b, c, x1, x2, delta;
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
                x1 = -b / (2 * a);
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
    else if (wybor == 4)
    {
        float a, p, q, b, c, x1, x2, delta;
        cout << "Obliczanie f. kwadratowej w postaci y=a(x-p)^2+q!" << endl;
        cout << "Podaj a: "; cin >> a;
        cout << "Podaj p: "; cin >> p;
        cout << "Podaj q: "; cin >> q;
        b = -2 * a * p;
        c = a * p * p + q;
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
                x1 = -b / (2 * a);
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
    else if (wybor == 5)
    {
        float a, b, c, p, q,d,x1,x2;
        cout << "Podaj wzor postaci ogolnej ax^2+bx+c" << endl;
        cout << "Podaj a: "; cin>>a;
        cout << "Podaj b: "; cin>>b;
        cout << "Podaj c: "; cin>>c;
        d = (b * b) - (4 * a * c);
        if (a != 0)
        {
            p = (-b) / (2 * a);
            q = (-d) / (4 * a);
            cout << "Postac kanoniczna: a=" << a << " p = " << p << " q = " << q;
        }
        else cout << "Nie ma postaci kanonicznej" << endl;
        if (d > 0)
        {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            cout << "Postac iloczynowa: a=" << a << " x1 = " << x1 << " x2 = " << x2;
        }
        else
        {
            cout << "Funkcja nie ma postaci iloczynowej";
        }

    }
    else if (wybor == 7)
    {
        float a, b, c, d,p,q, x1, x2;
        cout << "Podaj wzor postaci kanonicznej a(x-p)^2+q" << endl;
        cout << "Podaj a: "; cin >> a;
        cout << "Podaj p: "; cin >> p;
        cout << "Podaj q: "; cin >> q;
        b = -2 * a * p;
        c = a * p * p + q;
        cout << "Postac ogolna: a= " << a << " b=" << b << " c=" << c;
        d = (b * b) - (4 * a * c);
        if (d > 0)
        {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            cout << "\nPostac iloczynowa: a=" << a << " x1 = " << x1 << " x2 = " << x2;
        }
        else
        {
            cout << "Funkcja nie ma postaci iloczynowej";
        }
    }
    else if (wybor == 8)
    {
        float a, b, c, d, p, q, x1, x2;
        cout << "Podaj wzor postaci iloczynowej a(x-x1)(x-x2)" << endl;
        cout << "Podaj a: "; cin >> a;
        cout << "Podaj x1: "; cin >> x1;
        cout << "Podaj x2: "; cin >> x2;
        b = (-a)*(x1+x2);
        c = a * x1*x2;
        cout << "Postac ogolna: a= " << a << " b=" << b << " c=" << c;
        d = (b * b) - (4 * a * c);
        p = (x1 + x2) / 2;
        q = a * (p - x1) * (p - x2);
        cout << "\nPostac kanoniczna: a= " << a << " p=" << p << " q=" << q;
    }
}
