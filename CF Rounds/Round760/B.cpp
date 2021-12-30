#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
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
        string arr[n - 2];
        fo(i, n - 2)
        {
            cin >> arr[i];
        }

        string res = arr[0];
        for (int i = 1; i < n - 2; i++)
        {
            if (arr[i][0] == res[res.length() - 1])
            {
                res += arr[i][1];
            }
            else
            {
                res += arr[i];
            }
        }
        if (res.length() < n)
        {
            int l = res.length();
            fo(i, n - l)
            {
                res += 'a';
            }
        }
        cout << res << endl;
    }
}