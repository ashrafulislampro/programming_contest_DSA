#include <iostream>
using namespace std;

// Factorial function
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate combination (n r)
unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter value for n: ";
    cin >> n;
    cout << "Enter value for r: ";
    cin >> r;

    if (r > n) {
        cout << "r cannot be greater than n." << endl;
    } else {
        cout << "(" << n << " " << r << ") = " << combination(n, r) << endl;
    }

    return 0;
}
