#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int bn_arr[] = {1, 0, 1, 1, 1, 1, 1, 0, 0};
    int dec_num = 0;

    int len = sizeof(bn_arr) / sizeof(bn_arr[0]);

    for (int i = len - 1, j = 0; i >= 0; i--)
    {
        dec_num += (bn_arr[i] * pow(2, j));
        j++;
    }

    cout << "Binary To Decimal : " << dec_num << endl;

    return 0;
}