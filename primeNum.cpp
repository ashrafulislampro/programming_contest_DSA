#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    cout << "Enter a random number : ";
    cin >> num;
    if (num <= 1)
    {
        cout << "The number is not prime." << endl;
    }
    else
    {
        int root = sqrt(num + 1);
        for (int i = 2; i <= root; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }

    return 0;
}