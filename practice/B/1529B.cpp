#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
void solve()
{
    int n;
    cin >> n;

    vector<int> strange;
    int arr[n];
    fo(i, n)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
        {
            strange.push_back(arr[i]);
        }
    }
    sort(strange.begin(), strange.end());

    int md = INT_MAX;

    if (strange.size() > 0)
    {
        for (int i = 0; i < strange.size() - 1; i++)
        {
            md = min(md, abs(strange[i] - strange[i + 1]));
        }
    }
    int ans = strange.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= md && arr[i] > 0)
        {
            ans++;
            break;
        }
    }

    cout << ans << '\n';
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