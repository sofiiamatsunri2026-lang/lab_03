// lab_03_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x;
    double F1, F2;

    cout << "Enter a = ";
    cin >> a;

    cout << "Enter b = ";
    cin >> b;

    cout << "Enter c = ";
    cin >> c;

    cout << "Enter x = ";
    cin >> x;


    // Перший спосіб — скорочена форма розгалуження

    if (x < 5 && b != 0)
        F1 = a * pow(x + 7, 2) - b;

    if (x > 5 && b == 0)
        F1 = (x - c * a) / (a * x);

    if (!(x < 5 && b != 0) && !(x > 5 && b == 0))
        F1 = x / c;


    // Другий спосіб — повна форма розгалуження

   
    if (x < 5 && b != 0)
        F2 = a * pow(x + 7, 2) - b;
    else if (x > 5 && b == 0)
        F2 = (x - c * a) / (a * x);
    else
        F2 = x / c;

    cout << "F1 = " << F1 << endl;
    cout << "F2 = " << F2 << endl;

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
