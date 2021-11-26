#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    getline(cin, s);
    set<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == ',')
        {
        }
        else
        {
            ans.insert(s[i]);
        }
    }

    cout << ans.size() << endl;
}