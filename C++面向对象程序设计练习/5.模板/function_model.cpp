#include<iostream>
using namespace::std;

class Student {
	double score1, score2, score3;
	int id;
public:
	Student(double s1, double s2, double s3, int i) :score1(s1), score2(s2), score3(s3), id(i) {};
	bool operator>(const Student& s2) {
		if (this->score1 + this->score2 + this->score3 > s2.score1 + s2.score2 + s2.score3)
			return true;
		else
			return false;
	}
	friend ostream& operator<<(ostream& os, const Student& s);
};
ostream& operator<<(ostream& os, const Student& s) {
	os << "id: " << s.id << endl;
	os << "三门课的分数分别为： " << s.score1 << "  " << s.score2 << "  " << s.score3 << endl;
	return os;
}

template <typename T>
T getMax(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	Student s1(98, 99, 90, 2022), s2(80, 85, 60, 2021);
	cout<<getMax(s1, s2)<<endl;
	cout << "---------------" << endl;
	cout<<getMax(10, 5)<<endl;
	cout<<getMax(6.25, 3.75)<<endl;
	return 0;
}