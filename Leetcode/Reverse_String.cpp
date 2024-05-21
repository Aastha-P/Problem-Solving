#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    // void reverseString(vector<char> &s)
    // {
    //     int l = 0;
    //     int r = s.size() - 1;
    //     while (l < r)
    //     {
    //         char temp = s[l];
    //         s[l] = s[r];
    //         s[r] = temp;
    //         l++;
    //         r--;
    //     }
    // }

    void reverseString(vector<char> &s)
    {
        reverse(s.begin(), s.end());
    }
};
int main()
{
    Solution so;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    so.reverseString(s);

    for (char c : s)
    {
        cout << c;
    }
    return 0;
}
