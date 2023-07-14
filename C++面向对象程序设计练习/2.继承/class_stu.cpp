#include<iostream>
#include<string>
using namespace::std;

class Person {
	int age;
	string name;
public:
	Person(int a, string n) :age(a), name(n) {  };
	void setPerson(int a, string n){
		age = a;
		name = n;
	}
	void showPerson() {
		cout << "age:" << age << endl;
		cout << "name:" << name << endl;
	}
};
class Student;

class Data {
	int year, month, day;
public:
	Data(int y, int m, int d) :year(y), month(m), day(d) {};
	void setData(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	void showData() {
		cout << "the entrance data is:" << year << "-" << month << "-" << day << endl;
	}
};

class Student :public Person,Data {
	int grade;
public:
	Student(int a, string n, int g, int y, int m, int d) :Person(a, n), Data(y, m, d), grade(g) {};
	void setStudent(int a, string n, int g, int y, int m, int d) {
		setPerson(a, n);
		setData(y, m, d);
		grade = g;
	}
	void showStudent() {
		showPerson();
		showData();
		cout << "grade:" << grade << endl;
	}
};

int main()
{
	Student s(22, "Tom", 6, 2022, 9, 1);
	s.showStudent();
	s.setStudent(20,"Lily",5,2021,9,1);
	s.showStudent();
	return 0;
}