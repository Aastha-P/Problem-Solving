// Minimum Number Game
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> numberGame(vector<int> &nums)
    {
        ranges::sort(nums);
        for (int i = 0; i < nums.size(); i += 2)
            swap(nums[i], nums[i + 1]);
        return nums;
    }
};

int main()
{
    Solution s;
    return 0;
}