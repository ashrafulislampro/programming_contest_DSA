#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    double area = 0;

    cout << "Enter the verticle points of coordinate of a circle " << endl;
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;

    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    cout << "Area of Triangle = " << area << endl;

    return 0;
}