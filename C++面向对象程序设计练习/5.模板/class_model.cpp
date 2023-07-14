#include<iostream>
using namespace::std;

template <typename T, int size>
class Data {
	T data[size];
public:
	Data() {
		cout << "input " << size << " datas :" << endl;
		for (int i = 0; i < size; i++)
			cin >> data[i];
	}
	T getMax() {
		T max = data[0];
		for (int i = 1; i < size; i++){
			if (data[i] > max)
				max = data[i];
		}
		return max;
	}
	void show() {
		cout << size << " data: " << endl;
		for (int i = 0; i < size; i++)
			cout << data[i] << " ";
		cout << endl;
	}
	void insertsort();
};
template <typename T, int size>      //要加模板头
void Data<T, size>::insertsort() {      //实例化
	T temp;
	int j;
	for (int i = 1; i < size; i++) {
		temp = data[i];
		for (j = i - 1; j >= 0; j--) {
			if (temp < data[j])
				data[j + 1] = data[j];
			else
				break;
		}
		data[j + 1] = temp;
	}
}



int main() {
	Data<int, 8> d;
	d.show();
	cout << "********************" << endl;
	cout << d.getMax ()<< endl;
	cout << "********************" << endl;
	d.insertsort();
	d.show();
	return 0;
}