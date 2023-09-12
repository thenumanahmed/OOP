#include<iostream>
#include<string>
#include"Tool.h"
#include"Rock.h"
#include"Paper.h"
#include"Scissor.h"

using namespace std;

int main() {
	
	Scissor s1(5);
	Paper p1(7);
	Rock r1(15);


	cout << s1.fight(p1) << p1.fight(s1) << endl;
	cout << p1.fight(r1) << r1.fight(p1) << endl;
	cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;


}