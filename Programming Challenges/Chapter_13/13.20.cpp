#include <iostream>
#include <string>

using namespace std;

class PatientAccount
{
private:
    double perDayCharges;
    double otherCharges;
    int noOfDaysSpent;

public:
    PatientAccount(double c = 0.0, int n = 0)
    {
        perDayCharges = c;
        noOfDaysSpent = n;
        otherCharges = 0;
    }
    void setNoOfDays(int n)
    {
        noOfDaysSpent = n;
    }
    void setPerDayCharges(double c)
    {
        perDayCharges = c;
    }
    int getNoOfDaysSpent()
    {
        return noOfDaysSpent;
    }
    double getPerDayCharges()
    {
        return perDayCharges;
    }
    void addCharges(double newcharges)
    {
        otherCharges += newcharges;
    }
    double getTotalCharges()
    {
        return (otherCharges + (perDayCharges * noOfDaysSpent));
    }
};

class Surgery
{
    int charges1,
        charges2,
        charges3,
        charges4,
        charges5;

public:
    Surgery()
    {
        charges1 = 5000;
        charges2 = 6000;
        charges3 = 7000;
        charges4 = 8000;
        charges5 = 9000;
    }
    void displaySurguriesList()
    {
        cout << "1) 5000 wali surgery." << endl;
        cout << "2) 6000 wali surgery." << endl;
        cout << "3) 7000 wali surgery." << endl;
        cout << "4) 8000 wali surgery." << endl;
        cout << "5) 9000 wali surgery." << endl;
    }
    void setCharges1(int n)
    {
        charges1 = n;
    }
    void setCharges2(int n)
    {
        charges2 = n;
    }
    void setCharges3(int n)
    {
        charges3 = n;
    }
    void setCharges4(int n)
    {
        charges4 = n;
    }
    void setCharges5(int n)
    {
        charges5 = n;
    }
    void addChargesToAccount(PatientAccount &p1, int type)
    {
        switch (type)
        {
        case 1:
            p1.addCharges(charges1);
            break;
        case 2:
            p1.addCharges(charges2);
            break;
        case 3:
            p1.addCharges(charges3);
            break;
        case 4:
            p1.addCharges(charges4);
            break;
        case 5:
            p1.addCharges(charges5);
            break;
        }
    }
};

class Pharmacy
{
    int medication1Charges,
        medication2Charges,
        medication3Charges,
        medication4Charges,
        medication5Charges;

public:
    Pharmacy()
    {
        medication1Charges = 1000;
        medication2Charges = 2000;
        medication3Charges = 3000;
        medication4Charges = 4000;
        medication5Charges = 4500;
    }
    void displayMedicationsList()
    {
        cout << "2) 2000 wali medication." << endl;
        cout << "1) 1000 wali medication." << endl;
        cout << "3) 3000 wali medication." << endl;
        cout << "4) 4000 wali medication." << endl;
        cout << "5) 4500 wali medication." << endl;
    }
    void setMedication1charges(int a)
    {
        medication1Charges = a;
    }
    void setMedication2charges(int a)
    {
        medication2Charges = a;
    }
    void setMedication3charges(int a)
    {
        medication3Charges = a;
    }
    void setMedication4charges(int a)
    {
        medication4Charges = a;
    }
    void setMedication5charges(int a)
    {
        medication5Charges = a;
    }
    void addChargesToAccount(PatientAccount &p1, int type)
    {
        switch (type)
        {
        case 1:
            p1.addCharges(medication1Charges);
            break;
        case 2:
            p1.addCharges(medication2Charges);
            break;
        case 3:
            p1.addCharges(medication3Charges);
            break;
        case 4:
            p1.addCharges(medication4Charges);
            break;
        case 5:
            p1.addCharges(medication5Charges);
            break;
        }
    }
};

int main()
{
    double dailyCharges = 0.0;
    int noOfDays = 0;
    int selection = 0; // for surgery and medication selection

    cout << "Enter daily charges of the hospital: ";
    cin >> dailyCharges;

    cout << "Enter the no of days spent in the hospital: ";
    cin >> noOfDays;

    PatientAccount patient1(dailyCharges, noOfDays);

    Surgery s1;

    do
    {
        s1.displaySurguriesList();
        cout << "Select the surgery from the list: ";
        cin >> selection;
        if (selection < 1 || selection > 5)
        {
            cout << "Please Enter Valid Selection from the list. " << endl;
        }
        else
            break;
    } while (true);

    s1.addChargesToAccount(patient1, selection);

    Pharmacy m1;

    do
    {
        m1.displayMedicationsList();
        cout << "Select the medication from the list: ";
        cin >> selection;
        if (selection < 1 || selection > 5)
        {
            cout << "Please Enter Valid Selection from the list. " << endl;
        }
        else
            break;
    } while (true);

    m1.addChargesToAccount(patient1, selection);

    cout << "Total Charges of the patient are: " << patient1.getTotalCharges() << endl;

    return 0;
}