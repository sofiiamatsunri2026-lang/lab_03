// lab_03_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Мацун Софія
// Лабораторна робота №3
// Завдання 3.4
// Варіант 19

#include <iostream>

using namespace std;

int main()
{
    double R, x, y;

    cout << "Enter R = ";
    cin >> R;

    cout << "Enter x = ";
    cin >> x;

    cout << "Enter y = ";
    cin >> y;

    // Спосіб 1: розгалуження у скороченій формі

    if ((x >= 0 && x <= 2 * R &&
        y >= 0 && y <= 2 * R &&
        (x - R) * (x - R) + y * y >= R * R) ||
        (x >= -2 * R && x <= 0 &&
            y >= -2 * R && y <= 0 &&
            y >= -x - 2 * R))
        cout << "1) yes" << endl;

    if (!((x >= 0 && x <= 2 * R &&
        y >= 0 && y <= 2 * R &&
        (x - R) * (x - R) + y * y >= R * R) ||
        (x >= -2 * R && x <= 0 &&
            y >= -2 * R && y <= 0 &&
            y >= -x - 2 * R)))
        cout << "1) no" << endl;

    // Спосіб 2: розгалуження у повній формі

    if ((x >= 0 && x <= 2 * R &&
        y >= 0 && y <= 2 * R &&
        (x - R) * (x - R) + y * y >= R * R) ||
        (x >= -2 * R && x <= 0 &&
            y >= -2 * R && y <= 0 &&
            y >= -x - 2 * R))
        cout << "2) yes" << endl;
    else
        cout << "2) no" << endl;

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
