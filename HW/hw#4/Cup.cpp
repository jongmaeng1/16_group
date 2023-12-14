#include"Cup.h"
void Cup::getCount() {
	cout << "Cup\t";
	for (int i = 0; i < Things::count; i++)
		cout << '*';
	cout << endl;
}