#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int number;
    do
    {
        cout << "Please enter a positive integer: ";
        cin >> number;
        if (number > 0)
        cout << "The sum of all whole numbers from 1 to " << number << " is " << number*(number+1)/2 << endl;
        else
        cout << "Thank you! \n";
    }
    while (number>0);

    getch();
    return 0;
}
