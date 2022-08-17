#ifndef PAPERH
#define PAPERH

#include<iostream>
#include<string>
#include"Tool.h"
using namespace std;


class Paper :public Tool
{
public:
	Paper(int);
	bool fight(Tool& );
};
Paper::Paper(int str)
{
	strength = str;
	type = 'p';
}

bool Paper::fight(Tool& obj){
	float temp1=0.0, temp2=0.0;
	if (obj.getType() == 'r') {
		temp2 = obj.getStrength();
		temp1 = this->strength * 2;
	}
	else if ( obj.getType() == 's') {
		temp2 = obj.getStrength();
		temp1 = this->strength / 2;
	}
	if(temp1>temp2){
		return true;
	}
	else{
		return false;
	}
}
#endif