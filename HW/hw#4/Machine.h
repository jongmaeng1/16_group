#pragma once
#include "Coffee.h"
#include "sugar.h"
#include "Cream.h"
#include "Water.h"
#include "Cup.h"
class Machine {
private:
	Coffee coffee;
	Sugar sugar;
	Cream cream;
	Water water;
	Cup cup;
public :
	Machine();
	void subNormalCoffee();
	void subSugarCoffee();
	void subBlackCoffee();
	void fill();
	void show();
};
