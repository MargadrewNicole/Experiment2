#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
    int counter,next,first=0,second=1;
    for (counter=0;counter<=21;counter++)
    {
        if (counter <= 1)
            cout << counter << ",";
        else if (counter < 21)
        {
            next = first + second;
            first = second;
            second = next;
            cout << next << ",";
        }
        else
            cout << next+first;
    }
    getch();
    return 0;
}
