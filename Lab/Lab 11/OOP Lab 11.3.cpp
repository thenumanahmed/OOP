
#include<iostream>
#include<string>

using namespace std;

class Animal {
	string name;
	int age;

public:
	Animal() {

	}

	Animal(string name , int age) {
		this->name = name;
		this->age = age;
	}
	void setValue(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void setAge(int a) {
		age = a;
	}

};

class Dolphin : public Animal {
	string origin;
public:
	Dolphin() {

	}
	Dolphin(string o, string n, int a) : Animal(n, a) {
		origin = o;
	}
	void setOrigin(string o) {
		origin = o;
	}
	string getOrigin() {
		return origin;
	}
	void print() {
		cout << "Name is: " << getName() << endl;
		cout << "Age is: " << getAge() << endl;
		cout << "Origin is: " << getOrigin() << endl;
	}
	void setValue(string o, string n, int a) {
		origin = o;
		setName(n);
		setAge(a);
	}

};
class Zebra : public Animal {
	string origin;
public:
	Zebra() {

	}
	Zebra(string o, string n, int a) : Animal(n, a) {
		origin = o;
	}
	void setValue(string o, string n, int a)  {
		origin = o;
		setName(n);
		setAge(a);
	}
	void setOrigin(string o) {
		origin = o;
	}
	string getOrigin() {
		return origin;
	}

	void print() {
		cout << "Name is: " << getName() << endl;
		cout << "Age is: " << getAge() << endl;
		cout << "Origin is: " << getOrigin() << endl;
	}

};

int main() {

	Dolphin d1;
	Zebra z1;
	
	d1.setValue("Pakistan", "dolphin ", 3);
	z1.setValue("London", "zebra", 3);
	
	d1.print();
	z1.print();
	return 0;
}
