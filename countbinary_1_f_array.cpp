#include <iostream>

using namespace std;

int main()
{
    int arr[25] = {1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1};
    int count = 0, temp = 0;

    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == 1)
        {
            temp++;
        }

        if (count < temp)
        {
            count = temp;
        }
        if (arr[i] == 0)
        {
            temp = 0;
        }
    }
    cout << "The biggest number of binary 1 sequently = " << count << endl;
    return 0;
}