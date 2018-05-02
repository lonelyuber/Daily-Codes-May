#include <iostream>
using namespace std;

void print_menu();
void religion(int input);
double celsius(double input);

int main() {
	int num1;
	double num2;
	char input = 'a'; //dummy value: anything but 'q'
	print_menu();

	while (input != 'q') {
		cin >> input;

		if (input == 'h')
			print_menu();

		else if (input == 'r') {
			cout << "Which relgion?" << endl;

			cin >> num1;
			religion(num1);
		}
		else if (input == 't') {
			cout << "Fahrenheit: ";
			cin >> num2;
			cout << num2 << " Fahrenheit is " << celsius(num2) << " Celsius" << endl;
		}
		else
			cout << "Invalid command" << endl;
	}
}
// Help Menu
void print_menu() {
	cout << "q: quit" << endl;
	cout << "h: help" << endl;
	cout << "r: info about a religion" << endl;
	cout << "t: temperature conversion" << endl;
}
// Religion Info
void religion(int input) {
	if (input == 1)
		cout << "Christianity: 31.2%" << endl;
	else if (input == 2)
		cout << "Islam: 24.1%" << endl;
	else if (input == 3)
		cout << "Secular/Nonreligious/Agnostic/Atheist: 16%" << endl;
	else if (input == 4)
		cout << "Hinduism: 15.1%" << endl;
	else if (input == 5)
		cout << "Buddhism: 6.9%" << endl;
	else if (input == 6)
		cout << "Chinese traditional religion: 5.50%" << endl;
	else if (input == 7)
		cout << "Ethnic religions: 4.19%" << endl;
	else if (input == 8)
		cout << "African traditional religions: 1.40%" << endl;
	else if (input == 9)
		cout << "Sikhism: 0.32%" << endl;
	else if (input == 10)
		cout << "Spiritism: 0.21%" << endl;
	else
		cout << "Don't know anything about religion #" << input << endl;
}
// Fahrenheit to Celsius
double celsius(double input) {
	return input - 32 * .5556;
}