#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, nearest_num;
    double root;
    cout << "Enter a random number : " << endl;
    cin >> num;

    root = sqrt(num);
    nearest_num = round(root);
    cout << "Result : " << nearest_num << endl;

    return 0;
}