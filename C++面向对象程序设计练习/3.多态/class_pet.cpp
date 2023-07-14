#include<iostream>
using namespace::std;

class Pet {
public:      //纯虚函数，有纯虚函数的类称为抽象类
	virtual void speak() = 0;/*{               
		cout << "dont know what pet" << endl;
	}*/ 
};

class Cat:public Pet {
public:
	virtual void speak() {
		cout << "miaomiao" << endl;
	}
};

class Dog:public Pet {
public:
	virtual void speak() {
		cout << "wangwang" << endl;
	}
};

void getspeak(Pet* p) {
	p->speak();
}

int main() {
//	Pet p;    //抽象类不可以实例化对象
	Cat c;
	Dog d;
	getspeak(&c);
	getspeak(&d);
//	getspeak(&p);
	return 0;
}