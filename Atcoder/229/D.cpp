#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int k;
    cin >> k;

    int n = s.length();

    int l = 0;
    int r = 0;
    int ms = 0;
    int kctr = 0;

    while (r < n)
    {
        kctr += (s[r] == '.');

        while (kctr > k)
        {
            kctr -= (s[l] == '.');
            l++;
        }
        ms = max(ms, r - l + 1);
        r++;
    }

    cout << ms << '\n';
}