#include<iostream>
#include<fstream>
#include <vector>
using namespace std;

double list_min;
double list_max;

int main() {
	int a;
	int min;
	int max;
	vector <int> list;
	vector <int>::iterator iter;
	ifstream read_file;
	read_file.open("numbers.txt");
	read_file.close();

	while (read_file >> a) {
		list.push_back(a);
	}

	for (iter = list.begin(); iter < list.end(); ++iter) {
		if (*iter < a) {
			min = a;
			return a;
		}

		if (*iter > a) {
			max = a;
			return a;
		}
	}
	system("pause");
}