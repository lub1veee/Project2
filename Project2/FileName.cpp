#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i, a, b, c;
    cout << "������� ����� ��� ���� ��������, 1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ������� �� �������" << endl;
    cin >> i;
    cout << "������� ����� �" << endl;
    cin >> a;
    cout << "������� ����� b" << endl;
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
            cout << "b ������ a" << endl;
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
            cout << " �� ���� ������ ������" << endl;
        }
    if (i == 5)
        cout << " a % b = " << (a % b) << endl;
}