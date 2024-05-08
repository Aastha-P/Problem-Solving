#include <iostream>
#include <cmath>
class Solution
{
public:
    int mySqrt(int x)
    {
        return sqrt(int(x));
    }
};
int main()
{
    Solution s;
    s.mySqrt(4);
    return 0;
}