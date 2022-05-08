

#include<iostream>

using namespace std;

class Matrix {
	int array[2][2];
public:
	Matrix() {           //Default Constructor
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				array[i][j] = 0;
			}
		}
	}

	void input() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "Enter the value for index[" << i << "][" << j << "]: ";
				cin >> array[i][j];
			}
		}
	}

	void print() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "The value for index[" << i << "][" << j << "] is: ";
				cout << array[i][j] << endl;
			}
		}
	}

	Matrix& operator + (Matrix& obj) {
		Matrix temp;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				temp.array[i][j] = this->array[i][j] + obj.array[i][j];
			}
		}
		return temp;
	}

	/*Matrix& operator = (Matrix& obj) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				this->array[i][j] = obj.array[i][j];
			}
		}
		return *this;
	}*/

	Matrix& operator - (Matrix& obj) {
		Matrix temp;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				temp.array[i][j] = this->array[i][j] - obj.array[i][j];
			}
		}
		return temp;
	}

	friend ostream& operator << (ostream& out, Matrix& obj);
	friend istream& operator >> (istream& in, Matrix& obj);

};

ostream& operator << (ostream& out, Matrix& obj) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "The value for index[" << i << "][" << j << "] is: ";
			cout << obj.array[i][j] << endl;
		}
	}
	return out;
}

istream& operator >> (istream& in, Matrix& obj) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Enter the value for index[" << i << "][" << j << "]: ";
			cin >> obj.array[i][j];
		}
	}
	return in;
}


int main() {

	Matrix m1;
	m1.input();

	Matrix m2;
	m2.input();

	Matrix m3;
	Matrix m4;
	m3 = m1 + m2;
	m4 = m1 - m2 ;

	cout << "After Adding " << m3;
	cout << "After Subtracting " << m4;



	return 0;
}












