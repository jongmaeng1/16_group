#pragma once
class UI {
	static int n;
public:
	static void start();
	static int menu();
	static int insert();
	static int del();
	static int show() {
		return n;
	}
};

int UI::n = 0;

void UI::start() {
	cout << "그래픽 에디터입니다." << endl;
}
int UI::menu() {
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
	cin >> n;
	return n;
}
int UI::insert() {
	cout << "선:1, 원:2, 사각형:3 >> ";
	cin >> n;
	return n;
}
int UI::del() {
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
	cin >> n;
	return n;
}