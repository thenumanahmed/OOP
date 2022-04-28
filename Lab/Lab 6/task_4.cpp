//>>>>>>>>>>>>      1st Method          <<<<<<<<<<<<<<<<<<

//         For highest and average of particular index only             //


//===================< Task 4 >=========================//
#include <iostream>
using namespace std;

const int s=3;           //for size of subjects
class Student {
	float *Marks;
	static int count;
public:
	Student() {
		count++;
		Marks = new float[s];
		for (int i = 0; i < s; i++) {
			cout << "\nEnter marks of subject " << i + 1 << " of student " << count <<": ";
			cin >> *(Marks + i);
		}
	}
	float getMarksOfParticularSub (int i){
	    return * (Marks + i);
	}
	~Student() {
		delete [] Marks;
	}
};
int Student:: count = 0;
int main() {
    
	int size , index;
	cout << "How many students you want to enter :";
	cin >> size;
	float sum = 0.0,
	    avg= 0.0,
	    highest = 0.0;

	Student *std = new Student[size];
	do{
	    cout << "For which subject you want to calculate highest and average: ";
	    cin >> index;
	    if (index>s){
	        cout<<"Subject does not exist! "<< endl;
	    }
	}while(index>s);
	highest = std->getMarksOfParticularSub(index-1);
	for (int i = 0; i < size; i++) { 
		
		sum += (std+i)->getMarksOfParticularSub(index-1);
		
		if( highest<(std+i)->getMarksOfParticularSub(index-1) ){
		    highest = (std+i)->getMarksOfParticularSub(index-1);
		}
	}
	avg = sum/size;
	
	cout << "Highest marks in subject " << index <<" are: " << highest << endl; 
	cout << "Average marks in subject " << index <<" are: " << avg << endl; 
	
    
    
	delete []std;
	std = nullptr;

	return 0;
}


//==========================================================================================//


//>>>>>>>>>>>>>>>>>>>     2nd Method      >>>>>>>>>>>>>>>>>>>>

//      STORING HIGHEST AND AVERAGE OF ALL SUBJECTS IN ARRAY     //

//===================< Task 4 >=========================//

#include <iostream>
using namespace std;

const int s=3;           //for size of subjects
class Student {
	float *Marks;
	static int count;
public:
	Student() {
		count++;
		Marks = new float[s];
		for (int i = 0; i < s; i++) {
			cout << "\nEnter marks of subject " << i + 1 << " of student " << count <<": ";
			cin >> *(Marks + i);
		}
	}
	float getMarksOfParticularSub (int i){
	    return * (Marks + i);
	}
	~Student() {
		delete [] Marks;
	}
};

int Student:: count = 0;

int main() {
    
	int size , index;
	cout << "How many students you want to enter :";
	cin >> size;                                    // For no of students
	float sum = 0.0,
	    avg= 0.0;

	Student *std = new Student[size];

	int *highest = new int[s];
	float *average = new float[s];

	for (int index = 0; index < s; index++) { 
		highest[index] = (std+0)->getMarksOfParticularSub(index);
        sum = 0;
		for (int i = 0; i < size; i++) { 
		
				sum += (std+i)->getMarksOfParticularSub(index);
				
				if( highest[index]<(std+i)->getMarksOfParticularSub(index) ){
					highest[index] = (std+i)->getMarksOfParticularSub(index);
				}

		}
		average[index] = sum/size;
	}

    for(int i = 0 ; i<s ; i++){
        cout<<"Highest marks in Subject "<<i+1 <<" is: "<<highest[i]<<endl;
        cout<<"Average marks in Subject "<<i+1 <<" is: "<<average[i]<<endl;
    }
    
	delete []std;
	delete []highest;
	delete []average;
	std = nullptr;
	highest = nullptr;
	average = nullptr;
	
	return 0;
}




