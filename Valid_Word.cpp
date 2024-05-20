#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Solution
{
public:
    bool isValid(string word)
    {
        if (word.length() < 3)
        {
            return false;
        }

        bool hasVowel = false;
        bool hasConsonant = false;

        for (char ch : word)
        {
            if (!isalnum(ch))
            {
                return false;
            }
            if (isdigit(ch))
            {
                continue;
            }
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
            {
                hasVowel = true;
            }
            else
            {
                hasConsonant = true;
            }
        }
        return hasVowel && hasConsonant;
    }
};
int main()
{
    Solution s;
    bool result = s.isValid("b3");
    if (result)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}