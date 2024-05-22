#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int scoreOfString(string s)
    {
        int count = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            count += abs(int(s[i]) - int(s[i + 1]));
        }
        return count;
    }
};
int main()
{
    Solution s;
    return 0;
}