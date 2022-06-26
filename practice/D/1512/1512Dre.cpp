#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    // the biggest number is either 'x' or b[n+1]
    int n;
    cin >> n;
    vector<int> b(n + 2);
    ll sum = 0;
    map<int, int> occ;
    fo(i, n + 2)
    {
        cin >> b[i];
        sum += b[i];
        occ[b[i]]++;
    }
    sort(all(b));

    // check for each one is the extra number added
    bool found = false;
    int blen = n + 2;
    for (int i = 0; i < blen - 1; i++)
    {
        if (sum - b[i] == 2 * b[blen - 1])
        {
            found = true;
            fo(j, blen - 1)
            {
                if (j != i)
                {
                    cout << b[j] << ' ';
                }
            }
            cout << '\n';
            break;
        }
    }
    if (!found)
    {
        sum -= b[blen - 1];
        if (sum == 2 * b[blen - 2])
        {
            fo(i, n)
            {
                cout << b[i] << ' ';
            }
            cout << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
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