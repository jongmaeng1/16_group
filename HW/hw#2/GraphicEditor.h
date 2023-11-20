#pragma once
#include<iostream>
using namespace std;

class GraphicEditor { // 파생클래스
    int index; // 도형의 인덱스
public:
    GraphicEditor(int i) { index = i; }
    virtual void show() = 0; // 각 도형들의 출력함수를 구현하기 위해 순수 가상 함수 사용
    int getIndex() { return index; }
    void subIndex() { --index; }
};
