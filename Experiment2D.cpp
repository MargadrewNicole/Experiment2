#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
    int counter;
    for (counter=1;counter<=30;counter++)
    {
        if (counter >= 10 && counter < 30)
            cout << counter++ << ",";
        else if (counter < 10)
            cout << counter << ",";
        else
            cout << counter;
    }
    getch();
    return 0;
}
