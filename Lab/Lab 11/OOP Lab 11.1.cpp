#include<iostream>
#include<string>

using namespace std;

class Shape {
	float width;
	float height;
public:
	Shape() {
	}
	Shape(float w, float h) {
		width = w;
		height = h;
	}
	//Accessor
	float getArea() {
		return (height * width);
	}
	float getHeight() {
		return height;
	}
	float getWidth() {
		return width;
	}
	//Mutators
	void setHeight(float h) {
		height = h;
	}
	void setWidth(float w) {
		width = w;
	}

};

class Triangle : public Shape {
	float base;
public:
	Triangle() {

	}

	float getArea() {
		return (0.5 * getHeight() * base);
	}

	float getBase() {
		return base;
	}
	void setBase(float b) {
		base = b;
	}
	

};

class Rectangle : public Shape {
public:
	Rectangle(float w , float h) : Shape(w, h) {

	}
	
};

int main() {

	float width, height, base;
	cout << "Enter the width of rectangle : ";
	cin >> width;
	cout << "Enter the height of rectangle : ";
	cin >> height; 
	Rectangle r1(width , height);
	cout << "The area of rectangle is : " << r1.getArea() << endl;


	Triangle t1;
	cout << "Enter the base of triangle: ";
	cin >> base;
	t1.setBase(base);

	cout << "Enter the height of triangle: ";
	cin >> height;
	t1.setHeight(height);

	cout << "The area of triangle is : " << t1.getArea() << endl;


	return 0;
}




