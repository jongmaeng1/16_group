#include"Shape.h"

void Shape::paint() {
	draw();
}
Shape::Shape(int i) {
	index = i;
}
int Shape::getIndex() {
	return index;
}
void Shape::subIndex() {
	index--;
}
