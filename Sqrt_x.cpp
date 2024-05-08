#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    float mySqrt(int x)
    {
        return sqrt(x);
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter Number: ";
    cin >> n;
    float result = s.mySqrt(n);
    cout << "root: " << result;
    return 0;
}