#include"Coffee.h"
void Coffee::getCount() {
	cout << "Coffee\t";
	for (int i = 0; i < Things::count; i++)
		cout << '*';
	cout << endl;
}