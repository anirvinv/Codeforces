#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

bool customSortLeft(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    if ((a.first).second == (b.first).second)
    {
        if (a.second == b.second)
        {
            return (a.first).first > (b.first).first;
        }
        return a.second < b.second;
    }
    return (a.first).second < (b.first).second;
}
bool customSortRight(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    if ((a.first).second == (b.first).second)
    {
        if (a.second == b.second)
        {
            return (a.first).first > (b.first).first;
        }
        return a.second < b.second;
    }
    return (a.first).second > (b.first).second;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n][3];
    fo(i, n)
    {
        int l, r, c;
        cin >> l >> r >> c;
        arr[i][0] = l;
        arr[i][1] = r;
        arr[i][2] = c;
    }
    // ((index, left/right), cost)
    vector<pair<pair<int, int>, int>> lefts;
    vector<pair<pair<int, int>, int>> rights;
    fo(i, n)
    {
        int l, r, c;
        l = arr[i][0];
        r = arr[i][1];
        c = arr[i][2];

        lefts.push_back(make_pair(make_pair(i, l), c));
        rights.push_back(make_pair(make_pair(i, r), c));
        sort(lefts.begin(), lefts.end(), customSortLeft);
        sort(rights.begin(), rights.end(), customSortRight);

        int maxRCost = rights[0].second;
        int maxR = (rights[0].first).second;
        int minLCost = lefts[0].second;
        int minL = (lefts[0].first).second;

        bool same = false;
        fo(k, rights.size())
        {
            if ((rights[k].first).second != maxR)
            {
                break;
            }
            if (arr[(rights[k].first).first][0] == minL)
            {
                same = true;
                break;
            }
        }

        if (same)
        {
            cout << maxRCost << '\n';
        }
        else
        {
            cout << maxRCost + minLCost << '\n';
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