#include <iostream>
#include <iomanip>
using namespace std;

class ELECTRICITY {
    public: 
    string NAME;
    double PREVIOUS_READING, CURRENT_READING, CONSUMPTION, TOTAL_BILL; 
    double const RATE = 12.00;
    void input()
    {

        cout << "Enter name: ";
        cin >> NAME;
    
        cout << "Enter previous reading: ";
        cin >> PREVIOUS_READING;

        cout << "Enter current reading: ";
        cin >> CURRENT_READING;
    }
    void result()
    {
        cout << "Customer name: " << NAME << endl;
        cout << "Previous reading: " << PREVIOUS_READING << endl;
        cout << "Current reading: " << CURRENT_READING << endl;
        cout << "=============================" << endl;
        CONSUMPTION = CURRENT_READING - PREVIOUS_READING;
        TOTAL_BILL = CONSUMPTION * RATE;

        if (CONSUMPTION >= 0 && TOTAL_BILL >= 0)
        {
            cout << "Consumption: " << CONSUMPTION << endl;
            cout << "Total bill: " << TOTAL_BILL << endl;
        }
        else
        {
            cout << "INVALID! ERROR HAS OCCURED" << endl;
        }
        cout << fixed << setprecision(2);
    }
};

int main ()
{
    ELECTRICITY g;
    system("cls");
    char condition;
    do
    {
        g.input();
        g.result();
        cout << "Do you want to continue? [Y][N]: ";
        cin >> condition;
    } while (condition == 'Y' || condition == 'y');
    
    return 0;
}