#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float distance;
    cout << "Enter this two dimensional coordinate input" << endl;
    cin >> x1 >> x2 >> y1 >> y2;
    distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout << fixed << setprecision(2);
    cout << "Distance : " << distance << endl;
    return 0;
}