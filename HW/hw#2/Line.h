#pragma once
#include<iostream>
#include"GraphicEditor.h"

class Line : public GraphicEditor {
public:
    Line(int index) : GraphicEditor(index) {}
    void show() { cout << getIndex() << ": Line" << endl; }
};
