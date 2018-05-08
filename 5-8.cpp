#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void search();
int index[10];

int main() {
	while (1) {
	srand(time(NULL));
	

	for (int i = 0; i < 10; i++) {
		index[i] = rand() % 4 + 1;
		cout << index[i] << endl;
	}
		search();
		system("pause");
	}
}

void search() 
{
	for (int i = 0; i < 8; i++)
		if (index[i] == index[i + 1] && index[i] == index[i + 2] && index[i] == index[i + 3])
			cout << "Match found." << endl;
}