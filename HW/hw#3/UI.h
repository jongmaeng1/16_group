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
	cout << "�׷��� �������Դϴ�." << endl;
}
int UI::menu() {
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	cin >> n;
	return n;
}
int UI::insert() {
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> n;
	return n;
}
int UI::del() {
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> n;
	return n;
}