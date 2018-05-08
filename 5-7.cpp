#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	srand(time(NULL));
	int array[10];

	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 4 + 1;
		cout << array[i] << endl;
	}

}
