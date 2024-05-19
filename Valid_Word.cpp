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