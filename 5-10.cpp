#include <iostream>
using namespace std;

int main() {

	int input;
	int startingNumber = 1;

	cout << "Input number: " << endl;
	cin >> input;

	int sum = 0;
	for (int i = startingNumber; i <= input; i++) {
		cout << i << " + ";
		sum += i;
	}
	cout << " = " << sum << endl;
}