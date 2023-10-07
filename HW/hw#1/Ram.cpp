#include "Ram.h"

Ram::Ram() {
	size = 100*1024;
	for (int i = 0; i < (100 * 1024); i++) {
		mem[i] = 0; // 모든 요소를 0으로 초기화
	}
}
Ram::~Ram() {
	std::cout << "메모리 제거됨";
}

char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}
