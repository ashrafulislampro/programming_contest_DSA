#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a = 13, b = 14, c = 15;
    double area = 0, s = 0;
    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << fixed << setprecision(2) << endl;
    cout << "Area : " << area << endl;

    return 0;
}