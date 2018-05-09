#include <iostream>
#include <Windows.h>
using namespace std;

void sounds();

int main() {

	cout << "1 - Got one?" << endl;
	cout << "2 - cOmBo" << endl;
	cout << "3 - Skip?" << endl;
	cout << "4 - Quit?" << endl;
	cout << "5 - Secret?" << endl;

	sounds();
	
}
void sounds()
{
	int i = 1;

	while (i != 0) {

		cin >> i;
		switch (i) {
		case 1:
			cout << "Good job" << endl;
			PlaySound(TEXT("bing.wav"), NULL, SND_FILENAME);
			break;

		case 2:
			cout << "Wombo-Combo" << endl;
			PlaySound(TEXT("combo.wav"), NULL, SND_FILENAME);
			break;
		case 3:
			cout << "Level Tried" << endl;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME);
			break;
		case 4:
			cout << "Not possible" << endl;
			PlaySound(TEXT("wrong.wav"), NULL, SND_FILENAME);
			break;
		case 5:
			cout << "Press 0 to quit." << endl;
			break;
		}
	}
}