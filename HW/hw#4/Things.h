#pragma once
#include <iostream>
using namespace std;
class Things {
protected:
	int count;
public:
	Things();
	virtual void getCount() = 0;
	void fillCount();
	void subCount();
	int checkCount();
};
