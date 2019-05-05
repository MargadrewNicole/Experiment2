#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int hours;
    char package;

    cout << "This program calculates your total monthly bill depending on your internet package and hours of use." << endl;
    cout << "Please enter the letter that corresponds to your package." << endl;
    cout << "A. P995/month" << endl;
    cout << "B. P1495/month" << endl;
    cout << "C. 1995/month" << endl;
    cin >> package;
    cout << "Please enter the number of hours the internet service was used. (Please enter numeric characters only)." << endl;
    cin >> hours;

    switch (package)
    {
    case 'A':
    case 'a':
        if (hours >= 0 && hours <= 10)
            cout << "Your total bill for this month is P995." << endl;
        else if (hours > 10)
            cout << "Your total bill for this month is P" << 995 + ((hours-10)*20) << "." << endl;
        else
            cout << "Invalid \n";
        break;
    case 'B':
    case 'b':
        if (hours >= 0 && hours <= 20)
            cout << "Your total bill for this month is P1495." << endl;
        else
            cout << "Your total bill for this month is P" << 1495 + ((hours-20)*10) << "." << endl;
        break;
    case 'C':
    case 'c':
        if (hours >= 0)
            cout << "Your total bill for this month is P1995." << endl;
        else
            cout << "Invalid \n";
        break;
    default:
        cout << "You must only choose among packages A, B and C." << endl;
    }

    getch ();
    return 0;
}
