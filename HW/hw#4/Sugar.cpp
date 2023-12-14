#include"Sugar.h"
void Sugar::getCount() {
	cout << "Sugar\t";
	for (int i = 0; i < Things::count; i++)
		cout << '*';
	cout << endl;
}