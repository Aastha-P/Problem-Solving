#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main()
{
    vector<int> nums = {2, 3, 5, 4, 3, 5};
    Solution s;
    int newSize = s.removeElement(nums, 5);

    cout << "New Size: " << newSize << endl;
    cout << "Remaining elements: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << nums[i] << ",";
    }
    cout << endl;

    return 0;
}
