
#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
    int hours = 0;
    int min = 0;
    int sec = 0;

public:
    Time()
    {
        hours = 0;
        min = 0;
        sec = 0;
    }

    Time(int a, int b, int c)
    {
        if (a < 25 && a >= 0)
        {
            hours = a;
        }
        else
            hours = 0;
        if (b < 60 && b >= 0)
        {
            min = b;
        }
        else
            min = 0;
        if (c < 60 && c >= 0)
        {
            sec = c;
        }
        else
            min = 0;
    }
    Time &operator+(Time &obj)
    {
        Time temp;
        temp.sec = this->sec + obj.sec;
        temp.min = this->min + obj.min;
        temp.hours = this->hours + obj.hours;

        if (temp.sec >= 60)
        {
            temp.sec -= 60;
            temp.min += 1;
        }
        if (temp.min >= 60)
        {
            temp.min -= 60;
            temp.hours += 1;
        }
        if (temp.hours >= 24)
        {
            temp.hours -= 24;
        }
        return temp;
    }
    Time &operator-(Time &obj)
    {
        Time temp;
        temp.sec = this->sec - obj.sec;
        temp.min = this->min - obj.min;
        temp.hours = this->hours - obj.hours;

        if (temp.sec < 0)
        {
            temp.sec += 60;
            temp.min -= 1;
        }
        if (temp.min < 0)
        {
            temp.min += 60;
            temp.hours -= 1;
        }
        if (temp.hours < 0)
        {
            temp.hours += 24;
        }

        return temp;
    }

    friend istream &operator>>(istream &in, Time &obj);
    friend ostream &operator<<(ostream &in, Time &obj);
};

ostream &operator<<(ostream &out, Time &obj)
{
    cout << setfill('0') << setw(2) << obj.hours << ":";
    cout << setfill('0') << setw(2) << obj.min << ":";
    cout << setfill('0') << setw(2) << obj.sec << endl;
    return out;
}

istream &operator>>(istream &in, Time &obj)
{
    cout << "Enter hours: ";
    cin >> obj.hours;
    cout << "Enter min: ";
    cin >> obj.min;
    cout << "Enter sec: ";
    cin >> obj.sec;
    return in;
}

int main()
{
    Time t1(2, 32, 54);
    Time t2(2, 32, 56);
    Time t3;
    Time t4;

    t3 = t1 + t2;

    cout << "After Addition:\t\t" << t3;

    t4 = t1 - t2;
    cout << "After Subtraction:\t\t" << t4;

    return 0;
}
