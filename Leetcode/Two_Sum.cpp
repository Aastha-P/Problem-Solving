//*********By Array**********
#include <iostream>
int main()
{
    int target, n;

    std::cout << "value of n:";
    std::cin >> n;
    int num[n];
    for (int j = 0; j < n; j++)
    {
        std::cout << "numbers:";
        std::cin >> num[j];
    }

    std::cout << "target:";
    std::cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (target == (num[i] + num[k]))
            {

                std::cout << "[" << i << "," << k << "]";
            }
        }
    }
    // delete[] num; // deallocate memory

    return 0;
}

// ************BY Vector************
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (target == (nums[i] + nums[j]))
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {11, 3, 5, 6, 7};

    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Numbers: ";
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << ",";
        }
        cout << endl;

        cout << "Target: " << target << endl;

        cout << "Indices: "
             << "[" << result[0] << "," << result[1] << "]" << endl;
    }
    else
    {
        cout << "No two elements sum up to the target." << endl;
    }

    return 0;
}
