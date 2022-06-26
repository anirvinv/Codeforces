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

        string a;
        ll s;
        cin >> a >> s;

        vector<int> b;
        bool impossible = false;
        for (int i = a.length() - 1; i >= 0; i--)
        {

            int digit = a[i] - '0';
            if ((s % 10) >= digit)
            {
                b.push_back((s % 10) - digit);
                s /= 10;
            }
            else
            {
                b.push_back(10 + (s % 10) - digit);
                s /= 10;
                if (s % 10 != 1)
                {
                    impossible = true;
                    break;
                }
                else
                {
                    s /= 10;
                }
            }
        }
        if (!impossible)
        {
            while (s != 0)
            {
                b.push_back(s % 10);
                s /= 10;
            }

            reverse(b.begin(), b.end());
            int i = 0;
            while (b[i] == 0 && i < b.size())
            {
                i++;
            }
            for (int j = i; j < b.size(); j++)
            {
                cout << b[j];
            }
            cout << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}