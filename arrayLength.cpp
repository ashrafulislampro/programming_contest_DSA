#include <iostream>
#include <array>

using namespace std;

int main()
{
    int binary_num[] = {1, 0, 1, 1, 1, 0, 0, 1, 1, 1};
    array<int, 6> arr{1, 1, 0, 1, 0, 0};

    int len = *(&binary_num + 1) - binary_num;
    int len2 = arr.size();
    int len3 = sizeof(binary_num) / sizeof(binary_num[0]);
    int len4 = end(binary_num) - begin(binary_num);

    cout << "Length 1 = " << len << endl;
    cout << "Length 2 = " << len2 << endl;
    cout << "Length 3 = " << len3 << endl;
    cout << "Length 4 = " << len4 << endl;

    return 0;
}