#pragma once
class Shape {
	int index;
protected:
	virtual void draw() = 0;
public:
	void paint();
	Shape(int i);
	int getIndex();
	void subIndex();
};