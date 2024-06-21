#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter the String : " << endl;
    cin >> str;
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    cout << "String Length : " << index << endl;

    return 0;
}