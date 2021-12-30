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
        string s;
        cin >> s;
        string cp = s.substr(0);

        // maximize team 1:

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?' && i % 2 == 0)
            {
                s[i] = '1';
            }
            else if (s[i] == '?' && i % 2 == 1)
            {
                s[i] = '0';
            }
        }

        int kicks1 = 0;
        int t1max = 5;
        int t2max = 5;

        int t1p = 0;
        int t2p = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                t1max--;
                t1p += (s[i] - '0');
            }
            else
            {
                t2max--;
                t2p += (s[i] - '0');
            }
            kicks1++;
            if ((t1p + t1max) < t2p)
            {
                break;
            }
            else if ((t2p + t2max) < t1p)
            {
                break;
            }
        }
        // maximize team 2:
        for (int i = 0; i < cp.length(); i++)
        {
            if (cp[i] == '?' && i % 2 == 1)
            {
                cp[i] = '1';
            }
            else if (cp[i] == '?' && i % 2 == 0)
            {
                cp[i] = '0';
            }
        }

        int kicks2 = 0;
        t1max = 5;
        t2max = 5;

        t1p = 0;
        t2p = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                t1max--;
                t1p += (cp[i] - '0');
            }
            else
            {
                t2max--;
                t2p += (cp[i] - '0');
            }
            kicks2++;
            if ((t1p + t1max) < t2p)
            {
                break;
            }
            else if ((t2p + t2max) < t1p)
            {
                break;
            }
        }

        cout << min(kicks1, kicks2) << '\n';
    }
}