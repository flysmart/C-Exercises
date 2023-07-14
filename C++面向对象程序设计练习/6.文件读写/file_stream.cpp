#include<iostream>
#include<fstream>
#include<string>
using namespace::std;

int main() {
	string id, name;
	ofstream myout;  //定义输出内存的对象
	myout.open("F:\\学习\\c++test\\bili_8\\student.txt", ios::out);
	if (!myout) {
		cout << "can't open the file!" << endl;
		return 0;
	}
	cout << "请输入学生人数： " << endl;
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cout << "请输入第" << i << "个学生的学号： " << endl;
		cin >> id;
		cout<< "请输入第" << i << "个学生的姓名： " << endl;
		cin >> name;
		myout << i << " " << id << " " << name << endl;
	}
	myout.close();
	
	ifstream myin; //定义输入内存的对象
	myin.open("F:\\学习\\c++test\\bili_8\\student.txt", ios::in);
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