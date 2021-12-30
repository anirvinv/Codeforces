#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll h, p;
        cin >> h >> p;
        ll totalNodes = ((ll)1 << h) - 1;
        ll finished = 0;
        ll avail = 1;
        ll moment = 0;
        while (finished < totalNodes)
        {
            if (finished + avail < totalNodes)
            {
                (avail / p == 0) ? moment++ : moment += (avail / p);
            }
            else
            {
                moment += (totalNodes - finished + p - 1) / p;
                break;
            }
            (avail / p == 0) ? finished += avail : finished += p * (avail / p);
            (avail / p == 0) ? avail *= 2 : avail += 2 * p * (avail / p) - (p * (avail / p));
        }
        cout << moment << '\n';
    }
}