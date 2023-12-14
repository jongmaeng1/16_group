#include "machine.h"
void Machine::show() {
	coffee.getCount();
	sugar.getCount();
	cream.getCount();
	water.getCount();
	cup.getCount();
}

void Machine::fill() {
	coffee.fillCount();
	sugar.fillCount();
	cream.fillCount();
	water.fillCount();
	cup.fillCount();
}
void Machine::subBlackCoffee() {
	if (coffee.checkCount() && water.checkCount() && cup.checkCount()) {
		coffee.subCount();
		water.subCount();
		cup.subCount();
		cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~\n";
	}
	else cout << "��ᰡ �����մϴ�.\n";
	
}
void Machine::subSugarCoffee() {
	if (coffee.checkCount() && sugar.checkCount() && cup.checkCount() && water.checkCount()) {
		coffee.subCount();
		sugar.subCount();
		water.subCount();
		cup.subCount();
		cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~\n";
	}
	else cout << "��ᰡ �����մϴ�.\n";
}
void Machine::subNormalCoffee() {
	if (coffee.checkCount() && cream.checkCount() && cup.checkCount() && water.checkCount()) {
		coffee.subCount();
		cream.subCount();
		water.subCount();
		cup.subCount();
		cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~\n";
	}
	else cout << "��ᰡ �����մϴ�.\n";
}
Machine::Machine() {
	cout << "------��ǰ Ŀ�� ���Ǳ��մϴ�.-----\n";
}
