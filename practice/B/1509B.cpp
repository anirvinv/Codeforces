#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mCount = 0;
    int tCount = 0;
    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        tCount += (s[i] == 'T');
        mCount += (s[i] == 'M');
        if (mCount > tCount)
        {
            possible = false;
            break;
        }
    }
    mCount = 0;
    tCount = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        tCount += (s[i] == 'T');
        mCount += (s[i] == 'M');
        if (mCount > tCount)
        {
            possible = false;
            break;
        }
    }
    if (possible && (tCount == mCount * 2))
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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