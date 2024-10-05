#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout << "Enter a random number : ";
    cin >> num;

    int root = sqrt(num + 1);

    for (int i = 2; i <= root; i++)
    {

        if (num % i == 0)
        {
            // cout << i << " ";
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}