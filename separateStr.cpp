#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str = "Concrete Mathematices is a nice advanced math book";
    string new_str = "";
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        new_str += str[i];
        if (str[i] == ' ')
        {
            cout << new_str << endl;
            new_str = "";
        }
    }

    if (!new_str.empty())
    {
        cout << new_str << endl;
    }
    return 0;
}