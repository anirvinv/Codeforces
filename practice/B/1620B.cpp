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
        int w, h;
        cin >> w >> h;
        vector<int> sides[4];
        int maxHor = 0;
        int maxVert = 0;

        fo(i, 4)
        {
            int k;
            cin >> k;
            fo(j, k)
            {
                int val;
                cin >> val;
                sides[i].push_back(val);
            }
        }
        int l1 = sides[0][0] - sides[0][sides[0].size() - 1];
        int l2 = sides[1][0] - sides[1][sides[1].size() - 1];
        l1 *= -1;
        l2 *= -1;
        maxHor = max(l1, l2);
        ll area1 = (ll)maxHor * h;

        int l3 = sides[2][0] - sides[2][sides[2].size() - 1];
        int l4 = sides[3][0] - sides[3][sides[3].size() - 1];
        l3 *= -1;
        l4 *= -1;
        maxVert = max(l3, l4);
        ll area2 = (ll)maxVert * w;

        cout << max(area1, area2) << '\n';
    }
}