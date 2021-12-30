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
        int l;
        cin >> l;
        char c;
        cin >> c;
        string s;
        cin >> s;

        bool full = false;
        fo(i, l)
        {
            if (s[i] != c)
            {
                break;
            }
            if (i == l - 1)
            {
                full = true;
            }
        }

        if (full)
        {
            cout << 0 << '\n';
        }
        else
        {
            if (s[l - 1] == c)
            {
                cout << 1 << '\n';
                cout << l << '\n';
            }
            else
            {
                int gcd = s[0];
                vector<int> divisors;
                fo(i, l)
                {
                    if (s[i] != c)
                    {
                        divisors.push_back(i + 1);
                    }
                }
                gcd = divisors[0];
                for (int d : divisors)
                {
                    gcd = __gcd(gcd, d);
                }
                if (gcd != 1)
                {
                    cout << 1 << '\n';
                    cout << gcd << '\n';
                }
                else
                {
                    cout << 2 << '\n';
                    cout << l << " " << l - 1 << '\n';
                }
            }
        }
    }
}