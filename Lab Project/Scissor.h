#ifndef SCISSORSH
#define SCISSORSH

#include<iostream>
#include<string>
#include"Tool.h"
using namespace std;


class Scissor :public Tool
{
public:
	Scissor(int);
	bool fight(Tool& );
};
Scissor::Scissor(int str)
{
	strength = str;
	type = 's';
}
bool Scissor::fight(Tool& obj){
	float temp1=0.0, temp2=0.0;
	if ( obj.getType() == 'r') {
		temp2 = obj.getStrength();
		temp1 = this->strength / 2;
	}
	else if ( obj.getType() == 'p') {
		temp2  = obj.getStrength();
		temp1 = this->strength * 2;
	}
	if(temp1>temp2){
		return true;
	}
	else{
		return false;
	}
}


#endif