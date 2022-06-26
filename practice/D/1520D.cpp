#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> yInt;
    fo(i, n)
    {
        cin >> arr[i];
        yInt[arr[i] - (i + 1)]++;
    }
    int pairs = 0;
    for (auto iter = yInt.begin(); iter != yInt.end(); iter++)
    {
        if (iter->second > 1)
        {
            pairs += (iter->second) * ((iter->second) - 1) / 2;
        }
    }
    cout << pairs << '\n';
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