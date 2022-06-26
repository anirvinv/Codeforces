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
    fo(i, n)
    {
        cin >> arr[i];
    }
    sort(all(arr));
    bool marked[n + 1];
    memset(marked, 0, sizeof marked);
    fo(i, n)
    {
        while (arr[i] > 1 && (arr[i] > n || marked[arr[i]]))
        {
            arr[i] /= 2;
        }
        if (marked[arr[i]])
        {
            cout << "NO" << '\n';
            return;
        }
        marked[arr[i]] = true;
    }
    cout << "YES" << '\n';
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