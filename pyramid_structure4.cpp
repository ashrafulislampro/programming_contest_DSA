#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        int temp = 1;
        for (j = 0; j < 5; j++)
        {

            // Handle special cases first
            if ((j == 0 && i == 1) || (j == 4 && i == 1) || (j < 2 && i == 2) || (j > 2 && i == 2))
            {
                cout << ".";
                continue;
            }

            // Handle first row (i == 0)
            if (i == 0)
            {
                // cout << " Test = " << temp;
                int res = (j <= 2) ? (j + 1) : (j - temp);
                temp += 2;
                if (res < 1)
                {
                    break;
                }

                cout << res;
                // cout << " Test : " << temp;
            }
            // if (i == 0)
            // {
            //     int res = (j <= 2) ? (j + 1) : (j - temp);
            //     temp += 2;
            //     if (res < 1)
            //     {
            //         break;
            //     }
            //     cout << res;
            // }
            // Handle second row (i == 1)
            else if (i == 1 && (j > 0 && j < 4))
            {
                int res = (j <= 2) ? j : 1;
                cout << res;
            }
            // Handle third row (i == 2)
            else if (i == 2 && j == 2)
            {
                cout << 1;
            }
            else
            {
                cout << ".";
            }
        }
        temp = 1;
        cout << endl;
    }

    return 0;
}
