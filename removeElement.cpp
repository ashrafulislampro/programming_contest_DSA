#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        else
        {
            int len = nums.size();
            int ind = 0;
            for (int i = 0; i < len; i++)
            {
                if (nums[i] != val)
                {
                    nums[ind] = nums[i];
                    ind++;
                }
            }
            return ind;
        }
    };
};

int main()
{
    solution obj;

    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    int k = obj.removeElement(nums, val);
    cout << "New Length = " << k << endl;
    cout << "Modify Array = " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}