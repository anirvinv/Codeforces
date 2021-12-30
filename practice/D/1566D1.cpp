#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

bool customSort(const pair<int, int> &a,
                const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

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
        bool row[m];
        memset(row, 0, sizeof row);
        vector<pair<int, int>> arr;
        fo(i, m)
        {
            int val;
            cin >> val;
            arr.push_back(make_pair(val, i + 1));
        }
        sort(arr.begin(), arr.end(), customSort);

        int inconv = 0;
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < i; j++)
            {
                inconv += arr[j].second < arr[i].second;
            }
        }
        cout << inconv << endl;
    }
}