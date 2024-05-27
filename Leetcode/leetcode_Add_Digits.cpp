// Add Digits
#include <iostream>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {
        return 1 + (num - 1) % 9;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "enter number: ";
    cin >> n;
    int ret = s.addDigits(n);
    cout << ret;
    return 0;
}