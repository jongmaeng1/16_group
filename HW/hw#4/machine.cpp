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
		cout << "맛있는 블랙 커피 나왔습니다~~\n";
	}
	else cout << "재료가 부족합니다.\n";
	
}
void Machine::subSugarCoffee() {
	if (coffee.checkCount() && sugar.checkCount() && cup.checkCount() && water.checkCount()) {
		coffee.subCount();
		sugar.subCount();
		water.subCount();
		cup.subCount();
		cout << "맛있는 설탕 커피 나왔습니다~~\n";
	}
	else cout << "재료가 부족합니다.\n";
}
void Machine::subNormalCoffee() {
	if (coffee.checkCount() && cream.checkCount() && cup.checkCount() && water.checkCount()) {
		coffee.subCount();
		cream.subCount();
		water.subCount();
		cup.subCount();
		cout << "맛있는 보통 커피 나왔습니다~~\n";
	}
	else cout << "재료가 부족합니다.\n";
}
Machine::Machine() {
	cout << "------명품 커피 자판기켭니다.-----\n";
}
