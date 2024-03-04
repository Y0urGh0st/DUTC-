#include <iostream>
using namespace std;

int main()
{
    int EnteredNum1, EnteredNum2, EnteredNum3;

    cout << "Enter 3 numbers: ";
    cin >> EnteredNum1 >> EnteredNum2 >> EnteredNum3;

    cout << "Numbers that belong to the interval [1,11]: ";
    if (EnteredNum1 >= 1 && EnteredNum1 <= 11) {
        cout << EnteredNum1 << " ";
    }
    if (EnteredNum2 >= 1 && EnteredNum2 <= 11) {
        cout << EnteredNum2 << " ";
    }
    if (EnteredNum3 >= 1 && EnteredNum3 <= 11) {
        cout << EnteredNum3 << " ";
    }
}