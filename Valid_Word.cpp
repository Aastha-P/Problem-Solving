#include <iostream>
#include <string>
class Solution
{
public:
    bool isValid(string word)
    {
        int n = word.size();
        if (n < 3)
        {
            return false;
        }
        if (word.size() > 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (word[j] == '$' || word[j] == '#' || word[j] == '@')
                {
                    return false;
                }
            }
        }

        if (word.size() > 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (isdigit(word[j]) || isalpha(word[j]))
                {
                    if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u')
                    {
                        return true;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    return 0;
}

// unordered_set<char> s = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
// int n = word.size();
// if (n < 3)
// {
//     return false;
// }
// bool df = false, uf = false, lf = false, vf = false, cf = false;
// for (auto c : word)
// {
//     if (!isdigit(c))
//         df = true;
//     if (isdigit(c))
//         lf = true;
//     if (islower(c))
//         uf = true;
//     if (isupper(c))
//         vf = true;
//     else if (!s.count(c) && isalpha(c))
//         cf = true;
// }
// return ((df || uf || lf) && vf & cf);