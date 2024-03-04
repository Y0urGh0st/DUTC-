#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int M;
    cout << "Enter the number M: ";
    cin >> M;
    int X[] = { 5, 8, 11,  0, -2, 4, -6, 10, 12, 6, 9 };
    vector<int> Y;
    for (int i = 0; i < 11; ++i) {
        if (abs(X[i]) > M) {
            Y.push_back(X[i]);
        }
    }
    cout << "Number M: " << M << endl;
    cout << "Array X: ";
    for (int i = 0; i < 11; ++i) {
        cout << X[i] << " ";
    }
    cout << endl;
    cout << "Array Y: ";
    for (int i = 0; i < Y.size(); ++i) {
        cout << Y[i] << " ";
    }
    cout << endl;
    return 0;
}