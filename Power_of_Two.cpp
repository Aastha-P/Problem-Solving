class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n >= 0 && __builtin_popcount(n) == 1;
    }
};
int main()
{
    Solution s;
    return 0;
}