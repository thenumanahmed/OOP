#ifndef ROCKH
#define ROCKH

#include<iostream>
#include<string>
#include"Tool.h"
using namespace std;
class Rock : public Tool
{
public:
	Rock(int);
	bool fight(Tool& );
};

Rock::Rock(int str) 
{
	strength =str;
	type= 'r';
}
bool Rock::fight(Tool& obj){
	float temp1=0.0, temp2=0.0;
	if (obj.getType() == 's') {
		temp1 = (float) this->strength * 2;
		temp2 = obj.getStrength();
	}
	else if (obj.getType() == 'p') {
		temp1 =(float) this->strength / 2;
		temp2 = obj.getStrength();
	}
	if(temp1>temp2){
		return true;
	}
	else{
		return false;
	}
}
#endif