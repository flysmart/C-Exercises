#include<iostream>
#include<fstream>
#include<string>
using namespace::std;

int main() {
	string id, name;
	ofstream myout;  //��������ڴ�Ķ���
	myout.open("F:\\ѧϰ\\c++test\\bili_8\\student.txt", ios::out);
	if (!myout) {
		cout << "can't open the file!" << endl;
		return 0;
	}
	cout << "������ѧ�������� " << endl;
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cout << "�������" << i << "��ѧ����ѧ�ţ� " << endl;
		cin >> id;
		cout<< "�������" << i << "��ѧ���������� " << endl;
		cin >> name;
		myout << i << " " << id << " " << name << endl;
	}
	myout.close();
	
	ifstream myin; //���������ڴ�Ķ���
	myin.open("F:\\ѧϰ\\c++test\\bili_8\\student.txt", ios::in);
	if (!myin) {
		cout << "can't open the file!" << endl;
		return 0;
	}
	char s[30];
	while (!myin.eof()) {
		myin.getline(s, sizeof(s));
		cout << s << endl;
	}
	myin.close();
	return 0;
}