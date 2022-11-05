		///time complexity
#include<iostream>
//#include<string>
using namespace std;



//		//time complexity
int main() {
	int sum = 0;
	int n = 5;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <i*i;j++) {
			if ((j % i) == 0) {
				for (int k = 0; k < j; k++) {
					sum++;
				}
			}
		}

	}
	cout << sum;
	return 0;

}
