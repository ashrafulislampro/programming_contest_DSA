#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double radius, circumference;
    cout << "Enter the Circle Radius : ";
    cin >> radius;

    circumference = 2 * M_PI * radius;
    cout << fixed << setprecision(2) << endl;
    cout << "Circumference Of the Circle is " << circumference << endl;

    return 0;
}