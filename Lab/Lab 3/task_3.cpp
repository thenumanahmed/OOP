#include<iostream>
#include<string>

using namespace std;

class Time {
	int hours;
	int min;
	int sec;
public:
	//Default Constructor
	Time() {
		hours = 0;
		min = 0;
		sec = 0;
	}
	//Mutator
	void setHours(int a) {
		while ( a < 0 && a > 23) {
			cout << endl << "Enter a valid number for hours from 0 to 23: ";
			cin >> a;
		}
		hours = a;
	}
	void setMin(int a) {
		while (a < 0 && a > 59) {
			cout << endl << "Enter a valid number for minutes from 0 to 59: ";
			cin >> a;
		}
		min = a;
	}
	void setSec(int a) {
		while (a < 0 && a > 59) {
			cout << endl << "Enter a valid number for seconds from 0 to 59: ";
			cin >> a;
		}
		sec = a;
	}
	//Accessor
	int getHour() const {
		return hours;
	}
	int getMin() const {
		return min;
	}
	int getSec() const {
		return sec;
	}
};

int main() {
	Time t1;
	int n;

	cout << "Enter Hours: ";
	cin >> n;
	t1.setHours(n);

	cout << "Enter Minutes: ";
	cin >> n;
	t1.setMin(n);

	cout << "Enter seconds: ";
	cin >> n;
	t1.setSec(n);

	cout << "Time is " << t1.getHour() << ":" << t1.getMin() << ":" << t1.getSec() << endl ;

	return 0;
}