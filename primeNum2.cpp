#include <iostream>

using namespace std;

int isPrimeNum(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % 2 == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter a random number :";
    cin >> num;

    if (isPrimeNum(num))
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }
    return 0;
}