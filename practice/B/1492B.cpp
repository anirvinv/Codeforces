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
    fo(i, n) cin >> arr[i];
    reverse(all(arr));
    bool marked[n + 1];
    memset(marked, 0, sizeof marked);
    int pmax = n;
    int ptr = 0;
    vector<vector<int>> d2;
    while (ptr < n)
    {
        vector<int> temp;
        while (marked[pmax])
        {
            pmax--;
        }
        while (arr[ptr] != pmax)
        {
            marked[arr[ptr]] = true;
            temp.push_back(arr[ptr++]);
        }
        temp.push_back(arr[ptr++]);
        marked[pmax] = true;
        pmax--;
        d2.push_back(temp);
    }
    for (vector<int> &v : d2)
    {
        reverse(all(v));
        for (int e : v)
        {
            cout << e << ' ';
        }
    }
    cout << '\n';
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