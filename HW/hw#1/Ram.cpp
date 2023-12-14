#include "Ram.h"

Ram::Ram() {
	size = 100*1024;
	for (int i = 0; i < (100 * 1024); i++) {
		mem[i] = 0; // ��� ��Ҹ� 0���� �ʱ�ȭ
	}
}
Ram::~Ram() {
	std::cout << "�޸� ���ŵ�";
}

char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}
