class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        string result = "";
        int i = 0;
        while (i < a.length() || i < b.length() || carry != 0)
        {
            int x = 0;
            if (i < a.length() && a[a.length() - i - 1] == '1')
            {
                x = 1;
            }
            int y = 0;
            if (i < b.length() && b[b.length() - i - 1] == '1')
            {
                y = 1;
            }
            result = to_string((x + y + carry) % 2) + result;
            carry = (x + y + carry) / 2;
            i++;
        }
        return result;
    }
};

int main()
{
    Solution s;
    return 0;
}