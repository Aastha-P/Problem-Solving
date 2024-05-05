#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
            }
            nums[i] = nums[j];
        }
        return i + 1;
    }
};
int main()
{
    vector<int> nums = {3, 4, 3, 4, 5, 2, 6, 3};
    Solution s;
    int newNum = s.removeDuplicates(nums);

    cout << "New Size: " << newNum << endl;
    cout << "Remaining elements: ";
    for (int i = 0; i < newNum; i++)
    {
        cout << nums[i];
        if (i != newNum - 1)
            cout << ",";
    }
    cout << endl;

    return 0;
}

// int main()
// {
//     vector<int> nums = {3, 4, 3, 5, 4, 2, 6, 3};
//     Solution s;
//     int newNum = s.removeDuplicates(nums);

//     cout << "New Size: " << newNum << endl;
//     cout << "Remaining elements: ";
//     for (int i = 0; i < newNum; i++)
//     {
//         cout << nums[i] << ",";
//     }
//     cout << endl;

//     return 0;
// }