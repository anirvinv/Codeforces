#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 1 << 20;

    map<int, int> mp;
    int q;
    cin >> q;
    while (q--)
    {
        int t, x;
        cin >> t >> x;
        if (t == 1)
        {
            int h = x;
            if (mp[h % N] == 0)
            {
                mp[h % N] = x + 1;
            }
            else
            {
            }
        }
        else
        {
            cout << mp[x % N] - 1 << '\n';
        }
    }
}