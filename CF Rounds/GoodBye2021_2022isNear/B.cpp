#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        res.push_back(s[0]);

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i + 1] <= s[i])
            {
                if (i == 0 && s[i + 1] == s[i])
                {
                    break;
                }
                else
                {
                    res += s[i + 1];
                }
            }
            else
            {
                break;
            }
        }

        cout << res;
        for (int i = res.length() - 1; i >= 0; i--)
        {
            cout << res[i];
        }
        cout << '\n';
    }
}