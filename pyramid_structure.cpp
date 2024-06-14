#include <iostream>

using namespace std;

int main()
{
    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k <= i; k++)
        {
            printf("*");
        }
        if (i < 2)
        {
            for (j = i + 1; j < 3; j++)
            {
                printf(".");
            }
        }

        printf("\n");
    }

    return 0;
}