#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ops = 0;
    int last = 0;
    fo(i, n)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            ops++;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            last = i;
            ops++;
            break;
        }
    }

    for (int i = 0; i < n - k; i++)
    {
        if (s[i] == 'x' && s[i + k] == '*')
        {
            s[i + k] = 'x';
            i += k - 1;
            ops += 1;
        }
        else if (s[i] == 'x' && s[i + k] == '.')
        {
            int idx = i + k - 1;
            while (idx > i)
            {
                if (s[idx] == '*' || s[idx] == 'x')
                {
                    break;
                }
                idx--;
            }
            if (i != idx)
            {
                if (s[idx] == 'x')
                {
                    i = idx - 1;
                }
                else
                {
                    s[idx] = 'x';
                    i = idx - 1;
                    ops++;
                }
            }
        }
    }

    cout << ops << '\n';
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