#include <iostream>
#include "machine.h"

int main() {
	Machine machine;
	machine.show();
	int seleteMenu;
	while (true) {
		cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>> ";
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
			cout << "�����մϴ�.";
			return 0;
		default :
			cout << "�߸� �Է��Ͽ����ϴ�.";
		}
		machine.show();
	}
	return 0;
}
