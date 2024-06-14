#include <iostream>

using namespace std;

int main()
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        if (i > 0)
        {
            for (j = i; j > 0; j--)
            {
                cout << ".";
            }
        }
        for (k = i + 1; k <= 3; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}