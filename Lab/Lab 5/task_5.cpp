#include<iostream>

using namespace std;

class Rectangle{
    float height,
        width;

public:
    //Parameterized Constructor
    Rectangle(float,float);
    //Copy Constructor
    Rectangle(const Rectangle &);
    //Mutators
    void setHeight(float);
    void setWidth(float);
    //Accessors
    float getArea();
    float getHeight();
    float getwidth();
};

int main(){
    float height, width;

    cout<<"Enter the height: ";
    cin>>height;
    cout<<"Enter the width: ";
    cin>>width;

    Rectangle r1(height , width);
    cout<<"The  area of the rectangle r1 is: "<<r1.getArea()<<endl;

    Rectangle r2(r1);
    cout<<"The  area of the rectangle r2 is: "<<r2.getArea()<<endl;
    
    return 0;
}

// ================== Function Definitions ================= //
//Parameterized Constructor
Rectangle::Rectangle(float h ,float w){
    if(h>0){
        height = h;
    }
    else{
        cout<<"Invalid height! ";
    }
    if(w>0){
        width = w;
    }
    else{
        cout<<"Invalid width! ";
    }
}
//Copy Constructor
Rectangle::Rectangle(const Rectangle &obj){
    height = obj.height;
    width = obj.width;
}
//Mutators
void Rectangle::setHeight(float h){
    if(h>0){
        height = h;
    }
    else{
        cout<<"Invalid height! ";
    }
}
void Rectangle::setWidth(float w){
    if(w>0){
        width = w;
    }
    else{
        cout<<"Invalid width! ";
    }
}
//Accessors
float Rectangle::getArea(){
    return height*width;
}
float Rectangle::getHeight(){
    return height;
}
float Rectangle::getwidth(){
    return width;
}