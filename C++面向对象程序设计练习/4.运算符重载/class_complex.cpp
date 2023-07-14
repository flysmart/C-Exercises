#include<iostream>
using namespace::std;

class Complex {
private:
	double real;
	double image;
public:
	Complex(double r=0, double i=0) :real(r), image(i) {};
	Complex operator+(const Complex& c2) {
		Complex temp;
		temp.real = this->real+c2.real;
		temp.image = this->image+c2.image;
		return temp;
	}
	Complex operator++() {
		this->real++;
		this->image++;
		return *this;
	}
	Complex operator++(int) {
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
	friend istream& operator>>(istream& in, Complex& c2);
	friend ostream& operator<<(ostream& out, const Complex& c2);
};

istream& operator>>(istream& in, Complex& c2) {
	cout << "input the real:" << endl;
	in >> c2.real;
	cout << "input the image:" << endl;
	in >> c2.image;
	return in;
}

ostream& operator<<(ostream& out, const Complex& c2) {
	if (c2.image > 0) {
		if (c2.image == 1)
			out << c2.real << "+" << "i" << endl;
		else
			out << c2.real << "+" << c2.image << "i" << endl;
	}
	else if (c2.image < 0) {
		if (c2.image == -1)
			out << c2.real << "-" << "i" << endl;
		else
			out << c2.real << c2.image << "i" << endl;
	}
	else if (c2.image == 0)
		out << c2.real << endl;
	return out;
}

int main() {
	Complex c1(2, 3);
	Complex c2;
	cin >> c2;
	cout << c1<<endl;
	cout << c2<<endl;
	cout << "--------------------" << endl;
	Complex c3 = c1 + c2;
	cout << c3 << endl;
	cout << "--------------------" << endl;
	if (c1 == c2)
		cout << "equal" << endl;
	else
		cout << "inequal" << endl;
	cout << "--------------------" << endl;
	Complex c4 = ++c1;
	cout << c1 << endl;
	cout << c4 << endl;
	Complex c5 = c2++;
	cout << c2 << endl;
	cout << c5 << endl;
	return 0;
}