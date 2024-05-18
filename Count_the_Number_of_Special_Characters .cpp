#include <stdio.h>
#include <string>
#include <set>
using namespace std;
class Solution
{
public:
    int numberOfSpecialChars(string s)
    {
        set<int> s1;
        set<int> s2;
        for (auto i : s)
        {
            if (i >= 'a' && i <= 'z')
                s1.insert(i - 'a');
            else
                s2.insert(i - 'A');
        }
        int c = 0;
        for (auto i : s1)
        {
            if (s2.find(i) != s2.end())
                c++;
        }
        return c;
    }
};
int main()
{
    Solution s;
    return 0;
}