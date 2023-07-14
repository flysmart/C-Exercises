#include<iostream>
#include<string>
using namespace::std;

class Person {
private:
	string name;
	int age;
	string gender;
public:
	Person(string n, int a, string g) :name(n), age(a), gender(g) {};
	void showPerson() {
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		cout << "gender:" << gender << endl;
	}
};

class Student:virtual public Person {
private:
	int id;
public:
	Student(string name,int age,string gender,int i) :Person(name,age,gender),id(i) {};
	void showStudent() {
		cout << "id:" << id << endl;
	}
};

class Employee :virtual public Person {
private:
	string job;
public:
	Employee(string name, int age, string gender, string j):Person(name, age, gender), job(j) {};
	void showEmployee() {
		cout << "job:" << job<<endl;
	}
};

class StudentHasjob :public Student, public Employee {
public:
	StudentHasjob(string name, int age, string gender, int id, string job) :
		Student(name, age, gender, id), Employee(name, age, gender, job), Person(name, age, gender) {};
	void showStudentHasjob() {
		showPerson();
		showStudent();
		showEmployee();
	}
};

int main()
{
	StudentHasjob s("Tom", 22, "boy", 20222220, "¹¤³ÌÊ¦");
	s.showStudentHasjob();
	return 0;
}