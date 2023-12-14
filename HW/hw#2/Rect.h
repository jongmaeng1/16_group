#pragma once
#include<iostream>
#include"GraphicEditor.h"

class Rect : public GraphicEditor {
public:
    Rect(int index) : GraphicEditor(index) {}
    void show() { cout << getIndex() << ": Rectangle" << endl; }
};
