#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    string s;
    cin >> s;
    int pos = s.find("11");
    if (pos == s.npos)
    {
        cout << "YES" << '\n';
        return;
    }
    else
    {
        for (int i = pos + 2; i < s.length() - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                cout << "NO" << '\n';
                return;
            }
        }
        cout << "YES" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--)
    {
        solve();
    }
}