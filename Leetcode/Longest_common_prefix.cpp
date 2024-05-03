#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    int n;
    vector<string> ss;
    string ans = "";

    cout << "No. of words:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Words " << i << ": ";
        cin >> s;
        ss.push_back(s);
    }

    for (int i = 0; i < ss[0].length(); i++)
    {
        for (int j = 1; j < ss.size() - 1; j++)
        {
            if (ss[j][i] != ss[j + 1][i])
            {
                cout << "Prefix: none"; // when no prefix in words.
                return 0;
            }
        }
        ans += ss[0][i];
    }
    cout << "Prefix: " << ans; // when atleast one prefix in words.
    return 0;
}
