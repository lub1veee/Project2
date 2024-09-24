#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i, a, b, c;
    cout << "¬ведите цифру дл€ ариф действи€, 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - остаток от делени€" << endl;
    cin >> i;
    cout << "¬ведите число а" << endl;
    cin >> a;
    cout << "¬ведите число b" << endl;
    cin >> b;
    if (i == 1)
        cout << "a + b = " << (a + b) << endl;

    if (i == 2)
        if (a > b)
        {
            cout << "a - b = " << (a - b) << endl;
        }
        else
        {
            cout << "b больше a" << endl;
        }

    if (i == 3)
        cout << "a * b = " << (a * b) << endl;

    if (i == 4)
        if (b != 0)
        {
            cout << "a / b = " << (a / b) << endl;
        }
        else
        {
            cout << " на ноль делить нельз€" << endl;
        }
    if (i == 5)
        cout << " a % b = " << (a % b) << endl;
}