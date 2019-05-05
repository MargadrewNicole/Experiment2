#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()

{
    double x,y;
    double z = 2.5;
    char xvalue;
    cout << "This program calculates V depending on the values of x and y. \n";
    cout << "Please enter your desired value of y. \n";
    cin >> y;
    cout << "Please choose among the following values of x: \n";
    cout << "A. x = 1 \n";
    cout << "B. x = 2 \n";
    cout << "C. I would like to enter another value of x. \n";
    cin >> xvalue;

    switch (xvalue)
    {
        case 'A':
        case 'a':
            if (y > 1 && y < 5)
                cout << setw(10) << fixed << setprecision(2) << "V = " << 1 * y * z << endl;
            else if (y >= 5)
                cout << setw(10) << fixed << setprecision(2) << "V = " << 1 + (y / z) << endl;
            else
                cout << "Invalid y value. \n";
            break;
        case 'B':
        case 'b':
            if (y <= 5)
                cout << setw(10) << fixed << setprecision(2) << "V = " << fabs((2 - y) / z) << endl;
            else if (y > 5)
                cout << setw(10) << fixed << setprecision(2) << "V = " << 2 - sqrt(y + z) << endl;
            else
                cout << "Invalid y value. \n";
            break;
        case 'C':
        case 'c':
            cout << "Please enter your desired value of x. \n";
            cin >> x;
            cout << setw(10) << fixed << setprecision(2) << "V = " << x + y + z << endl;
            break;
    }
    getch();
    return 0;
}
