#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string reverseVowels(string s)
    {
        auto isVowel = [](char c)
        {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            if (isVowel(s[l]) && isVowel(s[r]))
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else
            {
                if (!isVowel(s[l]))
                    l++;
                if (!isVowel(s[r]))
                    r--;
            }
        }
        return s;
    }
};

int main()
{
    Solution s;
    string ret = s.reverseVowels("hello");
    cout << ret;
    return 0;
}