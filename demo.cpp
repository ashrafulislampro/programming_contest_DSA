#include <iostream>

using namespace std;

int main()
{
    // Initialize temp outside the loop
    int temp = 1;
    for (int j = 0; j < 5; j++)
    {

        cout << " Test = " << temp;
        int res = (j <= 2) ? (j + 1) : (j - temp);
        temp += 2;
        if (res < 1)
        {
            break;
        }

        // cout << res;
        cout << " Test : " << temp;
    }

    return 0;
}
