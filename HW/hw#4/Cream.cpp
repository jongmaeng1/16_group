#include"Cream.h"
void Cream::getCount() {
	cout << "Cream\t";
	for (int i = 0; i < Things::count; i++)
		cout << '*';
	
	cout << endl;
}