#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a = 13, b = 14, c = 15;
    double angle1, angle2, angle3;

    // Using the Law of cosines to find angles
    angle1 = acos((b * b + c * c - a * a) / (2.0 * b * c));
    angle2 = acos((a * a + c * c - b * b) / (2.0 * a * c));
    angle3 = acos((b * b + a * a - c * c) / (2.0 * b * a));

    // Convert angles from radians to degrees
    angle1 = angle1 * 180 / M_PI;
    angle2 = angle2 * 180 / M_PI;  
    angle3 = angle3 * 180 / M_PI;

    cout << fixed << setprecision(2) << endl;
    cout << "angle1: " << angle1 << " degrees" << endl;
    cout << "angle2: " << angle2 << " degrees" << endl;
    cout << "angle3: " << angle3 << " degrees" << endl;
    cout << "Total Angle: " << angle1 + angle2 + angle3 << " degrees" << endl;

    return 0;
}
