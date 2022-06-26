#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)

int largestCommonSubstr(string a, string b)
{
    int maxlen = 0;

    fo(i, a.size())
    {
        for (int j = a.size() - i; j >= 1; j--)
        {
            string curr = a.substr(i, j);
            if (b.find(curr) != b.npos)
            {
                maxlen = max(maxlen, j);
            }
        }
    }
    fo(i, b.size())
    {
        for (int j = b.size() - i; j >= 1; j--)
        {
            string curr = b.substr(i, j);
            if (a.find(curr) != a.npos)
            {
                maxlen = max(maxlen, j);
            }
        }
    }
    return maxlen;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int len = largestCommonSubstr(a, b);
    cout << (a.length() - len + b.length() - len) << '\n';
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