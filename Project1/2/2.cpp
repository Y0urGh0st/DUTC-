#include <iostream>
#include <cstdlib> 
using namespace std;
void replaceNeg(int array[], int length) {
	for (int i = 0; i < length; ++i) {
		if (array[i] < 0) {
			array[i] = abs(array[i]);
		}
	}
}
int main() {
	int array[11] = { 5, -8, -11,  0, -2, 4, -6, 10, 12, 6, 9 };
	cout << "Orig arrray : ";
	for (int i = 0; i < 11; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
	replaceNeg(array, 11);
	cout << "New array: ";
	for (int i = 0; i < 11; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}