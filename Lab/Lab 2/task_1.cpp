#include<iostream>
#include<string>
using namespace std;

class Animal {
	int age;

public:
	string color;
	string name;
	Animal() {
	}
	Animal(string n, int a, string c) {
		name = n;
		age = a;
		color = c;
	}
	void print() {
		cout << "Name of animal is: " << name << endl;
		cout << "Age of animal is: " << age << endl;
		cout << "Color of animal is: " << color << endl;
	}

	void walking() {
		cout << name << " is walikng. " << endl;
	}

	int setAge(int a) {
		age = a;
	}

	int getAge() {
		return age;
	}
};

int main() {
	int a;
	Animal dog("Tommy", 2, "Brown");
	Animal cat("Cat ", 3, "White");
	Animal sheep("Sheep ", 2, "White");
	Animal wolf("Wolf", 4, "Brown");
	Animal cow("Cow", 2, "Black");

	dog.print();
	cow.print();
	sheep.print();
	wolf.print();
	cat.print();

	cout << "Enter the age of dog: ";
	cin >> a;
	dog.setAge(a);
	cout << "The age of the dog is: " << dog.getAge();

	dog.walking();

	return 0;
}