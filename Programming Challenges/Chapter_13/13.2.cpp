#include<iostream>
#include<string>
using namespace std;

class Employee{
    string name;
    int idNumber ;
    string department;
    string position;
public:
    Employee(string n, int id, string d, string p){
        name = n;
        idNumber = id;
        department = d;
        position = p;
    }
    Employee(string n, int id){
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }
    Employee(){
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }
    //Mutator functions
    void setName(string n){
        name = n;
    }
    void setId(int n){
        idNumber = n;
    }
    void setDepartment(string n){
        department = n;
    }
    void setPosition(string n){
        position = n;
    }

    //Accessor functions
    string getName(){
        return name;
    }
    int getId(){
        return idNumber;
    }
    string getDepartment(){
        return name;
    }
    string getPosition(){
        return position;
    }
    
};

int main(){
    Employee e1("Susan Meyers",47899 , "Accounting", "Vice President");
    Employee e2("Mark Jones",39119 , "IT", "Programmer");
    Employee e3("Joy Rogers",81774 , "Manufacturing", "Engineer");

    cout<<e1.getName()<<" "<<e1.getId()<<" "<<e1.getDepartment()<<" "<<e1.getPosition()<<endl;
    cout<<e2.getName()<<" "<<e2.getId()<<" "<<e2.getDepartment()<<" "<<e2.getPosition()<<endl;
    cout<<e3.getName()<<" "<<e3.getId()<<" "<<e3.getDepartment()<<" "<<e3.getPosition()<<endl;
    
    return 0;
}