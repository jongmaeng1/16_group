#include <iostream>
#include "machine.h"

int main() {
	Machine machine;
	machine.show();
	int seleteMenu;
	while (true) {
		cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4>> ";
		cin >> seleteMenu;
		switch (seleteMenu) {
		case 0:
			machine.subNormalCoffee();
			break;
		case 1:
			machine.subSugarCoffee();
			break;
		case 2:
			machine.subBlackCoffee();
			break;
		case 3:
			machine.fill();
			break;
		case 4:
			cout << "종료합니다.";
			return 0;
		default :
			cout << "잘못 입력하였습니다.";
		}
		machine.show();
	}
	return 0;
}
