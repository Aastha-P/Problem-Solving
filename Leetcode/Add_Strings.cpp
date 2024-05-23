#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int c1 = 0, c2 = 0, carry = 0, sum = 0;
        long long count = 0;
        string result = "";
        for (auto ch : num1)
        {
            c1 = (c1 * 10) + (ch - '0');
        }
        for (auto sh : num2)
        {
            c2 = (c2 * 10) + (sh - '0');
        }
        for (int i = 0; i < c1.size(); i++)
        {
            for (int j = 0; j < c2.size(); j++)
            {
                sum = carry;
                count += c1[i] + c2[j] + carry;
                carry = count / 10;
                count %= 10;
            }
        }
        result += to_string(count);
        return result;
    }
};

int main()
{
    Solution s;
    return 0;
}