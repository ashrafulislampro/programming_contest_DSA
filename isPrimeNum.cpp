#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double root;
    bool isPrime;

    while (true)
    {
        isPrime = true; // Reset isPrime for each new number

        cout << "Enter a number (enter 0 to exit): ";
        cin >> n;

        if (n == 0)
            break;

        if (n <= 1)
        {
            cout << "The number is not a prime number" << endl;
            continue;
        }

        root = sqrt(n);
        for (int i = 2; i <= root; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break; // No need to continue if n is already found not prime
            }
        }

        if (isPrime)
        {
            cout << "The number " << n << " is a prime number" << endl;
        }
        else
        {
            cout << "The number " << n << " is not a prime number" << endl;
        }
    }

    cout << "Exiting the program." << endl;
    return 0;
}
