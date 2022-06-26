#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
void solve()
{
    int n;
    cin >> n;
    int arr[n][3];
    fo(i, n)
    {
        int l, r, c;
        cin >> l >> r >> c;
        arr[i][0] = l;
        arr[i][1] = r;
        arr[i][2] = c;
    }

    int A = INT_MAX;
    int minL = A;
    int maxR = -1;
    int maxLen = 0;
    int maxLenCost = A;
    int minLcost = A;
    int maxRcost = A;
    fo(i, n)
    {
        int l = arr[i][0];
        int r = arr[i][1];
        int c = arr[i][2];

        if (l < minL)
        {
            minL = l;
            minLcost = A;
        }
        if (l == minL)
        {
            minLcost = min(minLcost, c);
        }

        if (r > maxR)
        {
            maxR = r;
            maxRcost = A;
        }
        if (r == maxR)
        {
            maxRcost = min(maxRcost, c);
        }

        if (maxLen < r - l + 1)
        {
            maxLen = r - l + 1;
            maxLenCost = A;
        }
        if (maxLen == r - l + 1)
        {
            maxLenCost = min(maxLenCost, c);
        }

        int ans = maxRcost + minLcost;
        if (maxR - minL + 1 == maxLen)
        {
            ans = min(ans, maxLenCost);
        }
        cout << ans << '\n';
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