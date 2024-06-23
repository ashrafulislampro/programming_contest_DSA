#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string str)
{
    istringstream stream(str);
    string word;
    int count = 0;

    while (stream >> word)
    {
        ++count;
    }
    return count;
}

int main()
{
    string str;
    cout << "Enter a sentence : ";
    getline(cin, str);

    int word_count = countWords(str);

    cout << "Word Count From the String : " << word_count << endl;

    return 0;
}




