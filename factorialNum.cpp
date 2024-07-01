#include <iostream>

using namespace std;

unsigned long long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

unsigned long long combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;
    cout << "Enter number for n: ";
    cin >> n;
    cout << "Enter number for r: ";
    cin >> r;

    if (r > n)
    {
        cout << "Obiously, 'n' is greater than 'r'." << endl;
    }
    else
    {
        cout << "(" << n << " " << r << ") = " << combination(n, r) << endl;
    }

    return 0;
}