#include <iostream>                        //This program will itialize array with random characters
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

char *ran_char( int);
void displayArray(char *, int);

int main()
{
    int SIZE = 0;
    cout<<"Enter number of elements for the array: ";
    cin >> SIZE;
    char *ptr = ran_char( SIZE);
    cout << "\nThe array when randomized is: ";
    displayArray(ptr, SIZE);
    delete[] ptr;
    ptr = nullptr;

    return 0;
}

char *ran_char( int SIZE)
{
    char *ptr = new char[SIZE];
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned seed = time(0);
    srand(seed);
    for (int i = 0; i < SIZE; i++)
    {
        char x = letters[rand() % 52];
        *(ptr + i) = x;
    }
    return ptr;
}
void displayArray(char *array, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " ";
}
/*
OUTPUT :
         the array when randomized is : r x M z u
*/

