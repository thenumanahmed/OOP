//===================< Task 1 >=========================//

#include <iostream>
#include <string>

using namespace std;

class Student {
	string id;
	string name;
	float marks;
public:
	Student() {
		name = "";
		marks = 0.0;
		id = "";
	}
	void Setmarks(float m) {
		marks = m;
	}
	void setId(string m) {
	    id = m;
	}
	void setName(string n) {
		name = n;
	}
	string getId(){
	    return id;
	} 
	string getName() {
		return name;
	}
	float getMarks() {
		return marks;
	}
	void display() {
		cout <<endl<<"ROll Number: "<<id << endl;
		cout << "Name: " << name << endl;
		cout << "MArks: " << marks << endl;
	}
};

int main() {
	Student s1;
	s1.setName("Ali");
	s1.setId("SE18");
	s1.Setmarks(100);
	s1.display();

	Student s2;
	s2.setName("Ahmad");
	s2.setId("SE13");
	s2.Setmarks(30);
	s2.display();

	Student s3;
	s3.setName("Haider");
	s3.setId("SE12");
	s3.Setmarks(80);
	s3.display();
	

	Student s4;
	s4.Setmarks(67);
	s4.setId("SE22");
	s4.setName("Husnain");
	s4.display();


	return 0;
}
