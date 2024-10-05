#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> newArr;
        int carry = 1;
        int len = digits.size();
        for (int i = len - 1; i >= 0; i--)
        {
            int sum = digits[i] + carry;

            if (sum > 9)
            {
                newArr.insert(newArr.begin(), 0);
                carry = 1;
            }
            else
            {
                newArr.insert(newArr.begin(), sum);
                carry = 0;
            }
        }
        if (carry == 1)
        {
            newArr.insert(newArr.begin(), 1);
        }
        return newArr;
    }
};

int main()
{
    Solution obj;

    vector<int> digits = {9};
    vector<int> newArr = obj.plusOne(digits);
    for (int i = 0; i < newArr.size(); i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;
    return 0;
}