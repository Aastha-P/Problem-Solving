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

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            str.push(s[i]);
        }
        else
        {
            if (str.empty())
            {
                cout << "no parentheses are push in stack." << endl;
                // return 1;
            }
            if (ismatch(str.top(), s[i]))
            {
                str.pop();
                cout << "find matched parentheses." << endl;
            }
            else
            {
                cout << "Unbalanced parentheses/braces/brackets." << endl;
                // return 1;
            }
        }
    }
    if (str.empty())
    {
        cout << "Empty Stack (all parentheses are matched)." << endl;
        // return 1;
    }
    else
    {
        cout << "Not empty stack (all parentheses are not matched)." << endl;
        // return 1;
    }
    return 0;
}

// This code applicable for example-  "()", "{}", "[]", "[{()}]",