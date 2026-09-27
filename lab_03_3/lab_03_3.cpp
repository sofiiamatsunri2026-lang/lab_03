// lab_03_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double R, x, y1, y2;

    cout << "Enter R = ";
    cin >> R;

    cout << "Enter x = ";
    cin >> x;

    // спосіб 1: розгалуження в скороченій формі
    if (x <= -1)
        y1 = -x - 1;

    if (x > -1 && x <= 1)
        y1 = 0;

    if (x > 1 && x <= 1 + 2 * R)
        y1 = sqrt(R * R - pow(x - (1 + R), 2));

    if (x > 1 + 2 * R)
        y1 = -(x - (1 + 2 * R)) / (6 - 2 * R);

    cout << "1) y = " << y1 << endl;

    // спосіб 2: розгалуження в повній формі
    if (x <= -1)
        y2 = -x - 1;
    else if (x <= 1)
        y2 = 0;
    else if (x <= 1 + 2 * R)
        y2 = sqrt(R * R - pow(x - (1 + R), 2));
    else
        y2 = -(x - (1 + 2 * R)) / (6 - 2 * R);

    cout << "2) y = " << y2 << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
