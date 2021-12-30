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
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;
        ll sum = 0;
        fo(i, n)
        {
            if (s1[i] == '1' && s2[i] == '1')
            {
                if (i < n - 1 && (s1[i + 1] == '0' && s2[i + 1] == '0'))
                {
                    sum += 2;
                    i++;
                }
            }
            else if (s1[i] == '0' && s2[i] == '0')
            {
                if (i < n - 1 && (s1[i + 1] == '1' && s2[i + 1] == '1'))
                {
                    sum += 2;
                    i++;
                }
                else
                {
                    sum++;
                }
            }
            else
            {
                sum += 2;
            }
            // cout << sum << endl;
        }
        cout << sum << '\n';
    }
}