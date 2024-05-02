#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool ismatch(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

int main()
{
    string s;
    stack<char> str;

    cout << "String: ";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            str.push(s[i]);
        }
        else
        {
            if (str.empty())
            {
                return false;
            }
            if (ismatch(str.top(), s[i]))
            {
                str.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (str.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}
