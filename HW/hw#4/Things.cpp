#include "Things.h"
Things::Things() {
	count = 3;
}
void Things::subCount() {
	count--;
}
void Things::fillCount() {
	count = 3;
}
int Things::checkCount() {
	return count == 0 ? 0 : 1;
}