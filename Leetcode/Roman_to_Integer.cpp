#include <iostream>
#include <string>
using namespace std;

int roman_to_int(char s)
{
    if (s == 'I')
    {
        return 1;
    }
    if (s == 'V')
    {
        return 5;
    }
    if (s == 'X')
    {
        return 10;
    }
    if (s == 'L')
    {
        return 50;
    }
    if (s == 'C')
    {
        return 100;
    }
    if (s == 'D')
    {
        return 500;
    }
    if (s == 'M')
    {
        return 1000;
    }

    return 0;
}
int main()
{
    string s;
    cout << "Roman number: ";
    cin >> s;

    int s1, s2, i, res = 0;

    for (i = 0; i < s.length(); i++)
    {

        s1 = roman_to_int(s[i]);

        if (i + 1 <= s.length())
        {
            s2 = roman_to_int(s[i + 1]);
            if (s1 >= s2)
            {
                res += s1;
            }
            else
            {
                res -= s1;
            }
        }
    }
    if (s1 == 0)
    {
        cout << "write correct characters to convert roman to integer.";
    }
    else
    {
        cout << res;
    }
    return 0;
}

//     string with space
//     getline(cin, fullName);
//     cout << "Your name is: " << fullName;
//     Symbol Value -- I 1 V 5 X 10 L 50 C 100 D 500 M 1000