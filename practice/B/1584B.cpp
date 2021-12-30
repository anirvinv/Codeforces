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
        int n, m;
        cin >> n >> m;
        int prod = m * n;
        int blues = 0;
        blues += prod / 3;
        int remain = prod - (3 * (prod / 3));
        if (remain == 2 || remain == 1)
        {
            blues++;
        }
        cout << blues << '\n';
    }
}