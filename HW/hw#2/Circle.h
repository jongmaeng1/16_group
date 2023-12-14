#pragma once
#include<iostream>
#include"GraphicEditor.h"

class Circle : public GraphicEditor {
public:
    Circle(int index) : GraphicEditor(index) {}
    void show() { cout << getIndex() << ": Circle" << endl; }
};
