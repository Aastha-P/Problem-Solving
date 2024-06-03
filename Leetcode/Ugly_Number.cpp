#include <iostream>
using namespace std;
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return false;

        int prime[] = {2, 3, 5};

        for (int i = 0; i < 3; i++)
        {
            while (n % prime[i] == 0)
                n /= prime[i];
        }

        return n == 1;
    }
};

int main()
{
    Solution s;
    bool ret = s.isUgly(14);
    cout << (ret ? "true" : "false") << endl;
    return 0;
}