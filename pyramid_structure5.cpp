#include <iostream>

using namespace std;

int main()
{
    int i, j, k;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {

            if ((j < 2 && i == 0) || (j > 2 && i == 0) || (j == 0 && i == 1) || (j == 4 && i == 1) || (j == 0 && i == 3) || (j == 4 && i == 3) || (j < 2 && i == 4) || (j > 2 && i == 4))
            {
                cout << ".";
                continue;
            }
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}