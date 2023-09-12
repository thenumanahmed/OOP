////////////////////////////////////nn////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

class Numbers
{
    int number;
    static string lessThanTwenty[20];
    static string tens[8];
    static string hundred;
    static string thousand;

public:
    Numbers(int number)
    {
        (*this).number = number;
    }
    void print()
    {
        string num = to_string(number); // Convert int to string
        string r1, r2, r3;

        cout << "====================" << endl;
        cout << "NUMBER IN WORDS" << endl;
        cout << "====================" << endl;

        if (number < 19)
            cout << lessThanTwenty[number] << endl;

        else if (number >= 20 && number <= 99)
        {
            r1 = num.at(1);
            if (r1 == "0")
                cout << tens[(number / 10) - 2] << endl;
            else
                cout << tens[(number / 10) - 2] << " " << lessThanTwenty[number % 10] << endl;
        }

        else if (number >= 100 && number <= 999)
        {
            r1 = num.at(1);
            r2 = num.at(2);
            if (r1 == "0" && r2 == "0")
            { // 600
                cout << lessThanTwenty[number / 100] << " " << hundred << endl;
            }
            else if (r1 == "0")
            { // 605
                cout << lessThanTwenty[number / 100] << " " << hundred << ", and "
                     << lessThanTwenty[((number % 100) % 10)] << endl;
            }
            else if (r2 == "0")
            { // 650, 610
                cout << lessThanTwenty[number / 100] << " " << hundred << ", ";
                if (number % 100 <= 19) // 610
                    cout << lessThanTwenty[number % 100] << endl;
                else // 650
                    cout << tens[((number % 100) / 10) - 2] << " " << endl;
            }
            else
            { // 675,619
                cout << lessThanTwenty[number / 100] << " " << hundred << ", ";
                if (number % 100 <= 19) // 618,619
                    cout << lessThanTwenty[number % 100] << endl;
                else
                { // 675
                    cout << tens[((number % 100) / 10) - 2] << " ";
                    cout << lessThanTwenty[((number % 100) % 10)] << endl;
                }
            }
        }

        else
        {
            r1 = num.at(1);
            r2 = num.at(2);
            r3 = num.at(3);
            if (r1 == "0" && r2 == "0" && r3 == "0")
            { // 6000
                cout << lessThanTwenty[number / 1000] << " " << thousand << endl;
            }
            else if (r2 == "0" && r3 == "0")
            { // 6400
                cout << lessThanTwenty[number / 1000] << " " << thousand << ", " << lessThanTwenty[(number % 1000) / 100] << " " << hundred << endl;
            }
            else if (r1 == "0" && r2 == "0")
            { // 6005
                cout << lessThanTwenty[number / 1000] << " " << thousand << ", and " << lessThanTwenty[number % 1000] << endl;
            }
            else if (r1 == "0")
            { // 6045, 6015
                cout << lessThanTwenty[number / 1000] << " " << thousand << ", and ";
                if (((number % 1000) % 100) <= 19) // 6015
                    cout << lessThanTwenty[(number % 1000) % 100] << endl;
                else
                { // 6045
                    cout << tens[(((number % 1000) % 100) / 10) - 2] << " " << lessThanTwenty[(((number % 1000) % 100) % 10)] << endl;
                }
            }
            else
            { // 6378, 6315, 6306
                cout << lessThanTwenty[number / 1000] << " " << thousand << ", " << lessThanTwenty[(number % 1000) / 100] << " " << hundred << ", and ";
                if (((number % 1000) % 100) <= 19) // 6315, 6309
                    cout << lessThanTwenty[(number % 1000) % 100] << endl;
                else
                { // 6378
                    cout << tens[(((number % 1000) % 100) / 10) - 2] << " " << lessThanTwenty[(((number % 1000) % 100) % 10)] << endl;
                }
            }
        }
    }
};
string Numbers::lessThanTwenty[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                                      "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string Numbers::tens[8] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

int main()
{
    int num;
    char choice;
    cout << "====CONVERT DIGITS TO WORDS====" << endl;

    do
    {
        cout << "Enter any number in the range of(0 - 9999) : ";
        cin >> num;
        if (num < 0 || num > 9999)
        {
            do
            {
                cout << "Invalid Number" << endl;
                cout << "Enter the number again: ";
                cin >> num;
            } while (num < 0 || num > 9999);
        }
        Numbers n(num);
        n.print();

        cout << "Press 'Y' or 'y' if you want to convert any more number: ";
        cin >> choice;
        cout << endl
             << endl;
    } while (choice == 'Y' || choice == 'y');
}

////////////////////////////////////ss/////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Number
{
    int num;
    string lessThan20[19] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eigth", "Nine", "Ten", "Eleven", "Twelve", "Thirthen", "Fourteen", "Fifteen", "Sixteen", "seventeen", "Eigtheen", "Nineteen"};
    string ten[8] = {"Twenty", "Thirthy", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string hundred = "Hundred";
    string thousand = "Thousand";

public:
    Number(int num)
    {
        this->num = num;
    }
    void print()
    {
        string Num = to_string(num);
        int r = 0;
        int d = Num.length();

        switch (Num.length())
        {
        case 4:
        {
            convertOneDigit(Num.at(0));
            cout << " Thousand , ";
            convertOneDigit(Num.at(1));
            cout << " Hundred ";
            cout << " and ";
            convertTwoDigit(Num.at(2), Num.at(3));
            break;
        }
        case 3:
        {
            convertOneDigit(Num.at(0));
            cout << " Hundred ";
            cout << " and ";
            convertTwoDigit(Num.at(1), Num.at(2));
            break;
        }
        case 2:
        {
            cout << " and ";
            convertTwoDigit(Num.at(0), Num.at(1));
            break;
        }
        case 1:
        {
            cout << " and ";
            convertOneDigit(Num.at(0));
            break;
        }
        }
    }
    void convertOneDigit(char a)
    {
        int x = a - 48;
        cout << lessThan20[x - 1] << " ";
    }
    void convertTwoDigit(char a, char b)
    {
        int x = a - 48;
        int y = b - 48;

        int check = 10 * x + y;
        if (check < 20)
        {
            cout << lessThan20[check - 1];
        }
        else
        {
            cout << ten[x - 2] << " " << lessThan20[y - 1] << " ";
        }
    }
};

int main()
{
    int n;
    char decision;

    do
    {
        // Input Validator
        do
        {
            cout << "Enter a Number between ( 0-9999) : ";
            cin >> n;
        } while (n < 0 || n > 9999);

        // Main Program
        Number word(n);
        word.print();

        // Asking for the Replay
        cout << "\n Do You want to Do it Again ( Y/N ) ";
        cin >> decision;

    } while (decision == 'y' || decision == 'Y');

    _getch();
    return 0;
}


//////////////////////////////////////////////////! 1 Arab ///////////////////////////////////

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Number
{
private:
    int num;
    string lessThan20[19] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eigth", "Nine", "Ten", "Eleven", "Twelve", "Thirthen", "Fourteen", "Fifteen", "Sixteen", "seventeen", "Eigtheen", "Nineteen"};
    string teen[8] = {"Twenty", "Thirthy", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string hundred = "Hundred";
    string thousand = "Thousand";

public:
    Number(int num)
    {
        this->num = num;
    }
    void print()
    {
        string Num = to_string(num);
        int r = 0;
        int d = Num.length();

        switch (Num.length())
        {
        case 9:
        {  
            convertTwoDigit(Num.at(0),Num.at(1));
            cout << " Crores ";
            convertTwoDigit(Num.at(2),Num.at(3));
            cout << " Lacks ";
            convertTwoDigit(Num.at(4),Num.at(5));
            cout << " Thousands , ";
            convertOneDigit(Num.at(6));
            cout << " Hundreds ";
            cout << " and ";
            convertTwoDigit(Num.at(7), Num.at(8));
            break;
        }
        case 8:
        {
            convertOneDigit(Num.at(0));
            cout << " Crores ";
            convertTwoDigit(Num.at(1),Num.at(2));
            cout << " Lacks ";
            convertTwoDigit(Num.at(3),Num.at(4));
            cout << " Thousands , ";
            convertOneDigit(Num.at(5));
            cout << " Hundreds ";
            cout << " and ";
            convertTwoDigit(Num.at(6), Num.at(7));
            break;
        }
        case 7:
        {
            convertTwoDigit(Num.at(0),Num.at(1));
            cout << " Lacks ";
            convertTwoDigit(Num.at(2),Num.at(3));
            cout << " Thousands , ";
            convertOneDigit(Num.at(4));
            cout << " Hundreds ";
            cout << " and ";
            convertTwoDigit(Num.at(5), Num.at(6));
            break;
        }
        case 6:
        {
            convertOneDigit(Num.at(0));
            cout << " Lacks ";
            convertTwoDigit(Num.at(1),Num.at(2));
            cout << " Thousands , ";
            convertOneDigit(Num.at(3));
            cout << " Hundreds ";
            cout << " and ";
            convertTwoDigit(Num.at(4), Num.at(5));
            break;
        }
        case 5:
        {
            convertTwoDigit(Num.at(0),Num.at(1));
            cout << " Thousands , ";
            convertOneDigit(Num.at(2));
            cout << " Hundreds ";
            cout << " and ";
            convertTwoDigit(Num.at(3), Num.at(4));
            break;
        }
        case 4:
        {
            convertOneDigit(Num.at(0));
            cout << " Thousands , ";
            convertOneDigit(Num.at(1));
            cout << " Hundreds ";
            cout << " and ";
            convertTwoDigit(Num.at(2), Num.at(3));
            break;
        }
        case 3:
        {
            convertOneDigit(Num.at(0));
            cout << " Hundreds ";
            cout << " and ";
            convertTwoDigit(Num.at(1), Num.at(2));
            break;
        }
        case 2:
        {
            cout << " and ";
            convertTwoDigit(Num.at(0), Num.at(1));
            break;
        }
        case 1:
        {
            cout << " and ";
            convertOneDigit(Num.at(0));
            break;
        }
        }
    }
    void convertOneDigit(char a)
    {
        int x = a - 48;
        cout << lessThan20[x - 1] << " ";
    }
    void convertTwoDigit(char a, char b)
    {
        int x = a - 48;
        int y = b - 48;

        int check = 10 * x + y;
        if (check < 20)
        {
            cout << lessThan20[check - 1];
        }
        else
        {
            cout << teen[x - 2] << " " << lessThan20[y - 1] << " ";
        }
    }
};

int main()
{
    int n;
    char decision;

    do
    {
        // Input Validator
        do
        {
            cout << "Enter a Number between ( 0-99999999) or( less than 1 Arab) : ";
            cin >> n;
        } while (n < 0 || n > 999999999);

        // Main Program
        Number word(n);
        word.print();

        // Asking for the Replay
        cout << "\n Do You want to Do it Again ( Y/N ) ";
        cin >> decision;

    } while (decision == 'y' || decision == 'Y');

    _getch();
    return 0;
}

