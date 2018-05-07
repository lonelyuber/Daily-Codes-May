#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	int array[10];
	srand(time(NULL));
	array[10] = rand() % 4 + 1;

	cout << array[10] << endl;

}