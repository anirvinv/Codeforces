#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;
    vector<int> b(n + 2);
    map<int, int> occ;
    ll sum = 0;
    fo(i, n + 2)
    {
        cin >> b[i];
        sum += b[i];
        occ[b[i]]++;
    }

    sort(all(b));
    if (n == 1)
    {
        if (b[0] == b[1])
        {
            cout << b[0] << '\n';
        }
        else if (b[1] == b[2])
        {
            cout << b[1] << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    else
    {
        // if sum - last element is <= last element
        int diff = sum - 2 * b[n + 1];
        if (diff <= b[n + 1])
        {
            if (diff == b[n + 1] && b[n + 1] == b[n])
            {

                fo(i, n)
                {
                    cout << b[i] << ' ';
                }
                cout << '\n';
            }
            else if (diff == b[n + 1] && b[n + 1] != b[n])
            {
                cout << -1 << '\n';
            }
            else
            {
                if (occ[diff] > 0)
                {
                    bool flip = true;
                    fo(i, n + 1)
                    {
                        if (flip && (b[i] == diff))
                        {
                            flip = false;
                        }
                        else
                        {
                            cout << b[i] << " ";
                        }
                    }
                    cout << '\n';
                }
                else
                {
                    cout << -1 << '\n';
                }
            }
        }
        else
        {
            // the last element is the EXTRA
            sum -= b[n + 1];
            sum -= b[n];
            if (sum == b[n])
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
        //
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