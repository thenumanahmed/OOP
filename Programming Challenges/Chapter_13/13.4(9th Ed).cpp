#include<iostream>
#include<string>

using namespace std;
class BroadcastStation{
    string name;
    double frequency;
    string typeOfBand;
    string genreOfTheStation;
public:
    //Constructor
    BroadcastStation(string n, double f, string t, string g){
        name = n;
        frequency = f;
        typeOfBand = t;
        genreOfTheStation = g; 
    };
    //Mutator 
    void setName(string n){
        name = n;
    }
    void setFrequency(double f){
        frequency = f;
    }
    void setTypeOfBand(string t){
        typeOfBand = t;
    }
    void setGenreOfTheStation(string g){
        genreOfTheStation = g;
    }
    //Accessor
    string getName() const{
        return name;
    }
    double getFrequency() const{
        return frequency;
    }
    string getTypeOfTheBand() const{
        return typeOfBand;
    }
    string getGenreOfTheStation() const{
        return genreOfTheStation;
    }

};

class RadioReciever{
    double volume;
    string name;
    string type;
    double frequency;
public:
    //Constructor
    RadioReciever(){
        volume = 1.2;                  //starting with default factory setting
        name = "Azadi "; 
        type = "Speech";
        frequency = 99.0;
    }
    
    //Accessor
    string getName() const{
        return name;
    }
    double getFrequency() const{
        return frequency;
    }
    string getType() const{
        return type;
    }
    double getVolume() const{
        return volume;
    }
    void display() const{
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Type: "<<type;
        cout<<endl<<"Frequency: "<<frequency;
        cout<<endl<<"Volume: "<<volume;
    }

    //Mutator
    void setName(string n){
        name = n;
    }
    void setFrequency(double f){
        frequency = f;
    }
    void setVolume(double v){
        volume = v;
    }
    void setType(string t){
        type = t;
    }
    void increaseFrequency(){
        frequency += .1;
    }
    void decreaseFrequency(){
        frequency -= .1;
    }
    void  increaseVolume(){
        volume += .1;
    }
    void decreaseVolume(){
        volume -= .1;
    }
};

int main(){

    RadioReciever r1;

    for(int i = 1 ; i < 5 ; i++ ){
        cout<<endl<<"Increasing Volume.....";
        r1.increaseVolume();
        r1.display();
        cout<<endl<<"Increasing Frequency.....";
        r1.increaseFrequency();
        r1.display();
    }
    cout<<endl;

    for(int i = 1 ; i < 5 ; i++ ){
        cout<<endl<<"Decreasing Volume.....";
        r1.decreaseVolume();
        r1.display();
        cout<<endl<<"Decreasing Frequency.....";
        r1.decreaseFrequency();
        r1.display();
    }

    return 0;
}