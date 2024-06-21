#include <iostream>

using namespace std;

int main()
{
    int arr[25] = {23, 21, 43, 12, 1, 2, 3, 4, 55, 12, 11, 25, 21, 45, 65, 71, 80, 24, 89, 13, 14, 18, 19, 34, 32};
    int i, j;
    while (1)
    {
        int sum = 0;
        cout << "Enter index number for i and j : ";
        cin >> i >> j;

        if (i > j)
        {
            cout << "'i' index number must be less then 'j'" << endl;
            break;
        }

        for (int k = i; k <= j; k++)
        {
            sum += arr[k];
        }

        cout << "Summation = " << sum << endl;
    }
    return 0;
}