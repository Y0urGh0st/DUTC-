#include <iostream>
using namespace std;

void calculChange(int amount) {
	int denominations[] = { 1000,500,200,100,50,20,10,5,2,1 };
	int notes[10] = { 0 };
	cout << "The change of " << amount << "hryvnuas consists of :\n";
	for (int i = 0; i < 10; i++) {
		notes[i] = amount / denominations[i];
		amount %= denominations[i];
		if (notes[i] > 0) {
			cout << denominations[i] << " UAH:" << notes[i] << " notes \n";

		}
	}
}
int main() {
	int amount;
	cout << "Enter the amount to be despensed: ";
	cin >> amount;
	calculChange(amount);
	return 0;
}