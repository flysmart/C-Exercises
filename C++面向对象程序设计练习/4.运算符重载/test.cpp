#include<iostream>
using namespace::std;


class Complex {
private:
	double real;
	double image;
public:
	Complex(double r = 0, double i = 0) :real(r), image(i) {};
	Complex operator+(const Complex& c2) {                 //成员函数，写在类的里面
		Complex temp;
		temp.real = this->real + c2.real;
		temp.image = this->image + c2.image;
		return temp;
	}
	Complex operator++() {
		this->real++;
		this->image++;
		return *this;
	}
	Complex operator++(int) {      //后置++
		Complex temp = *this;
		this->real++;
		this->image++;
		return temp;
	}
	bool operator==(const Complex& c2) {
		if (this->real == c2.real && this->image == c2.image)
			return true;
		else
			return false;
	}
	void show() {
		if (image > 0) {
			if (image == 1)
				cout << real << "+" << "i" << endl;
			else
				cout << real << "+" << image << "i" << endl;
		}
		else if (image < 0) {
			if (image == -1)
				cout << real << "-" << "i" << endl;
			else
				cout << real << image << "i" << endl;
		}
		else if (image == 0)
			cout << real << endl;
	}
	friend istream& operator>>(istream& in, Complex& c2);
};

istream& operator>>(istream& in, Complex& c2) {        //友元函数，写在类的外面，要在类里声明友元函数
	cout << "input the real:" << endl;
	in >> c2.real;
	cout << "input the image:" << endl;
	in >> c2.image;
	return in;
}

int main() {
	Complex c1(2, 3);
	Complex c2(3, 4);
	cin >> c2;
	c1.show();
	c2.show();
	cout << "--------------------" << endl;
	Complex c3 = c1 + c2;
	c3.show();
	cout << "--------------------" << endl;
	if (c1 == c2)
		cout << "equal" << endl;
	else
		cout << "inequal" << endl;
	cout << "--------------------" << endl;
	Complex c4 = ++c1;
	c1.show();
	c4.show();
	cout << "--------------------" << endl;
	Complex c5 = c2++;
	c2.show();
	c5.show();
	return 0;
}