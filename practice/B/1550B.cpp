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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int zeroes = 0;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else
            {
                zeroes++;
            }
        }

        // Delete all ones first and then add 0s
        int pts1 = 0;
        int consec = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                while (s[i] == '1' && i < n)
                {
                    consec++;
                    i++;
                }
                pts1 += a * consec + b;
                consec = 0;
            }
        }
        if (zeroes != 0)
        {
            pts1 += a * zeroes + b;
        }

        // Delete all zeroes first and then add 1s
        int pts2 = 0;
        consec = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                while (s[i] == '0' && i < n)
                {
                    consec++;
                    i++;
                }
                pts2 += a * consec + b;
                consec = 0;
            }
        }
        if (ones != 0)
        {
            pts2 += a * ones + b;
        }

        int pts3 = n * (a + b);
        cout << max(max(pts2, pts3), pts1) << '\n';
    }
}