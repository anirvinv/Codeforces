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
        ll n, k;
        cin >> n >> k;

        ll curr = 1;
        ll hours = 0;
        bool less = false;
        while (curr < n)
        {
            if (curr > k)
            {
                less = true;
                break;
            }
            hours++;
            curr += min(curr, k);
        }
        if (less)
        {
            hours += (n - curr + k - 1) / k;
        }
        cout << hours << '\n';
    }
}