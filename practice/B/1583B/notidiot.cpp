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
        int n, m;
        cin >> n >> m;
        set<int> s;

        fo(i, m)
        {
            int a, b, c;
            cin >> a >> b >> c;
            s.insert(b);
        }

        int center = -1;
        for (int i = 1; i <= n; i++)
        {
            if (s.count(i) == 0)
            {
                center = i;
                break;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i != center)
            {
                cout << center << " " << i << '\n';
            }
        }
    }
}