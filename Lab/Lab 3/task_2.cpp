#include<iostream>
#include<string>

using namespace std;
class Book {
	string name;
	float price;
	int totalPages;
public:
	//Default Constructor
	Book() {
		name = "";
		price = 0.0;
		totalPages = 0;
	}
	//Parameterized Constructor
	Book( string n , float pr , int pg) {
		name = n;
		price = pr;
		totalPages = pg;
	}


	//Setter
	void setName(string n) {
		name = n;
	}
	void setPrice(float p) {
		price = p;
	}
	void setTotalPages(int t) {
		totalPages = t;
	}
	//Getter
	string getName() const {
		return name;
	}
	float getPrice() const {
		return price;
	}
	int getTotalPages() const {
		return totalPages;
	}
};

int main() {
	Book b1, b2("bookName", 10.50 , 1050);

	string name;
	int pages;
	float price;

	cout << "Enter name of the book: ";
	cin >> name;
	b1.setName(name);

	cout << "Enter price of the book: ";
	cin >> price;
	b1.setPrice(price);

	cout << "Enter total pages of the book: ";
	cin >> pages;
	b1.setTotalPages(pages);

	cout << endl << "Name of book 1 is : " << b1.getName();
	cout << endl << "Price of book 1 is : " << b1.getPrice();
	cout << endl << "Total Pages of book 1 is : " << b1.getTotalPages();

	return 0;
}