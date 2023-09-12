#ifndef TOOLH
#define TOOLH

#include<iostream>
#include<string>

using namespace std;


//Class declarations
class Tool {
protected:
	int strength;
	char type;
public:
	Tool(int);
	void setStrength(int);
	void setType(char);
	char getType();
	int getStrength();
	virtual bool fight(Tool&) = 0;
};


Tool::Tool(int str = 0) {
	strength = str;
	type = 't';
}


void Tool::setStrength(int str) {
	strength = str;
}


void Tool::setType(char t) {
	type = t;
}


char Tool::getType() {
	return type;
}


int Tool::getStrength() {
	return strength ;
}

#endif