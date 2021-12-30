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
        int n;
        cin >> n;
        // (x, y)
        vector<pair<int, int>> pts(n);
        fo(i, n)
        {
            int val;
            cin >> val;
            pts[i] = make_pair(i, val);
        }
        int largestSub = 1;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> first = pts[i];

            for (int j = i + 1; j < n; j++)
            {
                int localSub = 2;
                pair<int, int> second = pts[j];

                for (int k = j + 1; k < n; k++)
                {
                    pair<int, int> third = pts[k];
                    int x1 = first.first;
                    int x2 = second.first;
                    int x3 = third.first;
                    int y1 = first.second;
                    int y2 = second.second;
                    int y3 = third.second;

                    if ((y1 - y2) * (x3 - x2) == (y3 - y2) * (x1 - x2))
                    {
                        localSub++;
                    }
                }
                largestSub = max(largestSub, localSub);
            }
        }
        cout << n - largestSub << '\n';
    }
}