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