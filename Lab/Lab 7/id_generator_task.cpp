#include<iostream>
#include<string>
using namespace std;

class IdGenerator {
	static int count;
	string id;
public:
	IdGenerator()
	{
		count++;
		id = "2021SE" + to_string(count);
	}
	static int getCount()
	{
		return count;
	}
	static void setIdStart(int i) {
		count = i;
	}
	string getId() {
		return id;
	}
};
int IdGenerator::count = 0;

int main()
{
	int start;
	cout << "Enter the start of the id: ";
	cin >> start;
	IdGenerator::setIdStart(start);
	int limit;
	cout << "Enter the limit of the ID generation: ";
	cin >> limit;

	IdGenerator* ptr = new IdGenerator[limit];
	for (int i = 0; i < limit; i++)
	{
		cout << "ID Number #" << i + 1 << " : " << ptr[i].getId() << endl;
	}

	delete[] ptr;
	return 0;
}