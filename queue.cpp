#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(100);
    q.push(101);
    q.push(102);

    while (!q.empty())
    {
        cout << q.front() << endl; // print the front
        q.pop();                   // remove that one
    }

    return 0;
}