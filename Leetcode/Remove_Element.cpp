#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.size() == 0)
        {
            return 0;
        }

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
    vector<int> nums = {2, 3, 4, 3, 5};
    Solution s(nums);
    s.removeElement(nums, 3);
    return 0;
}