#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
    int gallons,balance,answer;
    cout << "This program calculates your monthly water bill. \n";
    cout << "How many gallons of water have you consumed for this month? \n";
    cin >> gallons;
    cout << "Do you have an unpaid balance? Please press 1 for yes and 0 for no. \n";
    cin >> answer;
    if (answer == 1)
        {
            cout << "Please enter the amount of unpaid balance. \n";
            cin >> balance;
            cout << "Your total water bill for this month is P" << balance + 20 + 35 + (gallons * 1.10) << endl;
        }
    else
        cout << "Your total water bill for this month is P" << 35 + (gallons * 1.10) << endl;

    getch();
    return 0;
}
