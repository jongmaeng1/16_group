#pragma once
#include<iostream>
using namespace std;

class GraphicEditor { 
    int index; 
public:
    GraphicEditor(int i) { index = i; }
    virtual void show() = 0; 
    int getIndex() { return index; }
    void subIndex() { --index; }
};
