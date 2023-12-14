#pragma once
#include"Shape.h"
class Rect : public Shape {
public:
	Rect(int index) : Shape(index) {};
	void draw();
};