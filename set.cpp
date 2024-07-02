#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(15);
    s.insert(10);
    s.insert(5);

    set<int>::iterator it;

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}