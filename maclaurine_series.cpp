#include <iostream>
#include <cmath>

using namespace std;

unsigned long long factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

double maclaurine_series(int n, int x)
{
    double cosx = 1.0;

    for (int i = 0; i < n; i++)
    {
        double term = (pow(x, 2 * i) / factorial(2 * i));

        if (i % 2 == 1)
        {
            cosx -= term;
            cout << " Term = " << term << endl;
        }
        else
        {
            cosx += term;
            cout << " Term : " << term << endl;
        }
    }

    return cosx;
}

int main()
{
    int n, x;
    cout << "Enter coordinate number for n : " << endl;
    cin >> n;
    cout << "Enter coordinate number for x : " << endl;
    cin >> x;
    double result = maclaurine_series(n, x);

    cout << "Cos(" << x << ") using Maclaurin series up to " << n << " terms is : " << result << endl;

    return 0;
}