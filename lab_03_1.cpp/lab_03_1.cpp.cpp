// lab_03_1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> 

using namespace std;
int main()
{
  
    double x;
    double y;
    double A;
    double B;
    double y2;
    // спосіб 1: розгалуження в скороченій формі
    A = 2 * x - 13.5;

    if (x < -1)
        B = -sin(x) / (1 + pow(cos(x), 2));

    if (x >= -1 && x <= 1)
        B = -(pow(cos(x), 2) * pow(sin(x), 2) - 1);

    if (x > 1)
        B = -log10(x + 0.4);

    y = A + B;

    cout << "1) y = " << y << endl;
    
    // спосіб 2: розгалуження в повній формі
    if (x < -1)
        B = -sin(x) / (1 + pow(cos(x), 2));
    else if (x >= -1 && x <= 1)
        B = -(pow(cos(x), 2) * pow(sin(x), 2) - 1);
    else
        B = -log10(x + 0.4);

    y = A + B;

    cout << "2) y = " << y << endl;
   


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
