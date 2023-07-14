#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Square{
private:
	int line;
	int perimeter;
	int area;
public:
	int getPerimter(){
		return perimeter=line * 4;
	}
	int getArea() {
		return area=line*line;
	}
	void setLine() {
		cout << "input the line:" << endl;
		cin >> line;
	}
	void show() {
		getPerimter();
		getArea();
		cout << "the line is:" << line << endl;
		cout << "the perimeter is:" << perimeter << endl;
		cout << "the area is:" << area << endl;
	}
	Square(int a) :line(a) {};
};

int main()
{
	Square s(2);
	s.show();
	s.setLine();
	s.show();
	return 0;
}


