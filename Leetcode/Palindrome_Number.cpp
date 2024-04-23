// Here we check if a number is palindrome number or not.
// case - if number is negative it not be a palindrome number.
// If number is palindrome output is True otherwise False.
#include <iostream>
using namespace std;
int main()
{
    int n, digit = 0, rev = 0;
    cout << "Number: ";
    cin >> n;
    int x = n;
    while (x != 0)
    {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    if (n >= 0 && n == rev)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}