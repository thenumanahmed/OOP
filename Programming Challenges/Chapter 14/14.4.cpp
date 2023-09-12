#include<iostream>

using namespace std;


class NumDays {
private:
	double noOfHoursWorked;
	double days;
	static double workingHoursInADay;
	//Utility Function
	void calculateDays() {
		days = (noOfHoursWorked / workingHoursInADay);
	}
public:
	//Constructor
	NumDays(double a = 0) {
		noOfHoursWorked = a;
		calculateDays();
	}

	//Getter Functions
	double getDays() {
		return days;
	}
	double getNoOfHoursWorked() {
		return noOfHoursWorked;
	}
	static double getWorkingHoursInADay() {
		return workingHoursInADay;
	}

	//Setter Functions
	void setDays( double a) {
		days = a;
	}
	void setNoOfHoursWorked(double a) {
		if (a >= 0) {
			noOfHoursWorked = a;
			calculateDays();
		}
	}
	void setWorkingHoursInADay(int a) {
		if (a >= 0) {
			workingHoursInADay = a;
			calculateDays();
		}
	}

	//Operator Overloading

	//Addition Operator
	double operator + (NumDays& obj) {
		return obj.noOfHoursWorked + this->noOfHoursWorked;
	}
	
	//Subtraction Operator
	double operator - (NumDays& obj) {
		return this->noOfHoursWorked - obj.noOfHoursWorked  ;
	}
	
	//Increment Operator
	NumDays& operator ++ () {
		this->noOfHoursWorked++;
		calculateDays();
	}

	//Decrement Operator
	NumDays& operator -- () {
		this->noOfHoursWorked--;
		calculateDays();
	}



};

double NumDays::workingHoursInADay = 8;



int main(){
	
	NumDays a, b;
	double sum, sub;

	a.setNoOfHoursWorked(12);
	cout << a.getDays() << endl;

	b.setNoOfHoursWorked(16);
	cout << b.getDays() << endl;

	sum = a + b;
	cout << "sum =" << sum << endl;
	sub = a - b;
	cout << "sub =" << sub << endl;

	return 0;
};