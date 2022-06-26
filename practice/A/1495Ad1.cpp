#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;
    vector<int> miners;
    vector<int> mines;

    fo(i, 2 * n)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0)
        {
            miners.push_back(abs(y));
        }
        else
        {
            mines.push_back(abs(x));
        }
    }
    sort(all(miners));
    sort(all(mines));

    double total = 0;
    fo(i, n)
    {
        total += sqrt(miners[i] * miners[i] + mines[i] * mines[i]);
    }
    printf("%.15f\n", total);
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