#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        stringstream ss(line);

        vector<int> v;
        int num;

        while (ss >> num)
        {
            v.push_back(num);
        }

        sort(v.begin(), v.end());

        int len = v.size();
        cout << "Sorted : " << endl;
        for (int i = 0; i < len; i++)
        {
            cout << v[i];
            if (i != len - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// demo

// #include <iostream>
// #include <vector>
// #include <sstream>
// #include <algorithm>
// #include <string>

// using namespace std;

// int main()
// {
//     string line;
//     while (getline(cin, line))
//     {
//         stringstream ss(line);
//         int num;
//         vector<int> v;

//         while (ss >> num)
//         {
//             v.push_back(num);
//         }
//         sort(v.begin(), v.end());
//         int len = v.size();
//         for (int i = 0; i < len; i++)
//         {
//             cout << v[i];
//             if (i != len - 1)
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl; // To ensure output is correctly formatted
//     }
//     return 0;
// }
