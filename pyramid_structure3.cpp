#include <iostream>

using namespace std;

int main()
{
    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {

            if ((j < 2 && i == 0) || (j > 2 && i == 0) || (j == 0 && i == 1) || (j == 4 && i == 1))
            {
                printf(".");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}