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

    return -1;
}
int main()
{
    string s;
    cout << "Roman number: ";
    cin >> s;

    int s1, s2, i;
    for (i = 0; i < sizeof(s); i++)
    {
        s1 = roman_to_int(s[i]);

        if (i + 1 <= sizeof(s))
        {
            s2 = roman_to_int(s[i + 1]);
                }
    }
    return 0;
}

//     string with space
//     getline(cin, fullName);
//     cout << "Your name is: " << fullName;
// Symbol Value
//     I 1 V 5 X 10 L 50 C 100 D 500 M 1000