#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double radius, s;
    cout << "Enter the circle radius : " << endl;
    cin >> radius;
    s = 2 * M_PI * radius;
    cout << fixed << setprecision(2) << endl;
    cout << "Circumference Of Circle : " << s << endl;
    return 0;
}