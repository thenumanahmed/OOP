#include<iostream>
using namespace std;
int main() 
{
	int x, y, z;
	int* xPtr = &x, * yPtr = &y, * zPtr = &z;

	cout << "Enter value of x: ";
	cin >> *xPtr;
	cout << "Enter value of y: ";
	cin >> *yPtr;

	*zPtr = *xPtr + *yPtr;
	
	cout << endl << *xPtr << " + " << *yPtr << " = " << *zPtr;
	return  0;
}