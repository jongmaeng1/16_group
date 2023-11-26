#include<iostream>
#include<vector>
using namespace std;
#include"UI.h"
#include"Rect.h"
#include"Line.h"
#include"Circle.h"

int main() {
	vector<Shape*> v;

	UI::start();
	int index = 0;
	while (true) {
		int menu = UI::menu();
		if (menu == 1) {
			int type = UI::insert();
			switch (type)
			{
			case 1:
			{
				Line* line = new Line(index);
				v.push_back(line);
				index++;
				break;
			}
			case 2:
			{
				Circle* circle = new Circle(index);
				v.push_back(circle);
				index++;
				break;
			}
			case 3:
			{
				Rect* rect = new Rect(index);
				v.push_back(rect);
				index++;
				break;
			}
			default:
				cout << "입력 에러" << endl;
			}
		}
		else if (menu == 2) {
			int delTarget = UI::del();
			v.erase(v.begin() + delTarget);
			for (int i = delTarget; i < index - 1; i++) {
				v[i]->subIndex();
			}
			index--;
		}
		else if (menu == 3) {
			for (int i = 0; i < index; i++) {
				v[i]->paint();
			}
		}
		else if (menu == 4) {
			break;
		}
		else cout << "입력 에러 " << endl;
	}
	return 0;
}
