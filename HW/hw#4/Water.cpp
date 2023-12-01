#include"Water.h"
void Water::getCount() {
	cout << "Water\t";
	for (int i = 0; i < Things::count; i++)
		cout << '*';
	cout << endl;
}