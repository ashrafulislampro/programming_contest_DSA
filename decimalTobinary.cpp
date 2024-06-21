#include <iostream>
#include <array>

using namespace std;

int main()
{
    int num = 0, temp, i = 0;

    cout << "Enter the decimal number : ";
    cin >> num;
    int binary_num[20];

    while (num != 0)
    {
        binary_num[i] = num % 2;
        i++;
        num = num / 2;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary_num[j];
    }

    return 0;
}