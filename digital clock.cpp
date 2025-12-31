#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int hours = 0;
    int min = 0;
    int sec = 0;

    cout << "Hours: ";
    cin >> hours;

    cout << "Minutes: ";
    cin >> min;

    cout << "Seconds: ";
    cin >> sec;

    while (true)
    {
        system("cls");

        if (sec == 60)
        {
            sec = 0;
            min++;
        }

        if (min == 60)
        {
            min = 0;
            hours++;
        }

        if (hours == 24)
        {
            hours = 0;
        }

        cout << hours << ":" << min << ":" << sec;
        sec++;

        Sleep(1000);
    }
}
