#include<iostream>
#include<string>

using namespace std;
class Volume {
	float height;
	float breadth;
	float length;
public:
	//Default Contructor
	Volume() {
		height = 0.0;
		length = 0.0;
		breadth = 0.0;
	}
	//Mutator
	void setHeight(float a){
		height = a;
	}
	void setBreadth(float a) {
		breadth = a;
	}
	void setLength(float a) {
		length = a;
	}
	//Accessor
	double getVolume() {
		return height * length * breadth;
	}
};
int main() {
	Volume v1;
	float a;

	cout << "Enter length: ";
	cin>>a;
	v1.setLength(a);

	cout << "Enter height: ";
	cin >> a;
	v1.setHeight(a);

	cout << "Enter breadth: ";
	cin >> a;
	v1.setBreadth(a);

	cout<<endl<<"The volume is: " << v1.getVolume();

	return 0;
}