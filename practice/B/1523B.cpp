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

    for (int i = n - 1; i >= 1; i--)
    {
        int target = -1 * arr[i];
        // decrement by elements before
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == target)
            {
                break;
            }
            else
            {
                int difference = arr[i] - target;
                if (difference / arr[j] > 0)
                {
                    arr[i] = -arr[j] * (difference / arr[j]);
                    fo(pt, difference / arr[j])
                    {
                        cout << "2 " << i + 1 << " " << j + 1 << '\n';
                    }
                }
            }
        }
        if (arr[i] != target)
        {
            for (int j = i + 1; i < n; i++)
            {
            }
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