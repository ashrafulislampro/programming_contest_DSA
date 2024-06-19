#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    double area = 0;
    cout << "Coordinates of vertices of the triangle :" << endl;
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    cout << x1 << " " << x2 << " " << x3 << " " << " " << y1 << " " << y2 << " " << y3 << endl;

    area = 1 / 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    cout << "Triangle Area : " << 1 / 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) << endl;

    return 0;
}