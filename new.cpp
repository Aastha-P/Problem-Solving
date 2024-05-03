#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    int n;
    vector<string> ss;
    cout << "No. of words:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Words " << i << ": ";
        cin >> s;
        ss.push_back(s);
    }
    // cout << s.size();
    // for (int i = 0; i < ss.size(); ++i)
    // {
    //     cout << ss[i] << '\n';
    // }

    for (int j = 0; j < ss.size(); j++)
        for (int k = 0; k < ss[j].size(); k++)
        {
            if (ss[j][k] = ss[j + 1][k])
            {
                cout << ss[j][k];
            }
            else
            {
                cout << "not matched";
            }
        }
    return 0;
}
