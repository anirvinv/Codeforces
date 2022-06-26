#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

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

    int minL = INT_MAX;
    int maxR = INT_MIN;

    int minLindex = 0;
    int maxRindex = 0;

    for (int i = 0; i < n; i++)
    {
        int l, r, c;
        l = arr[i][0];
        r = arr[i][1];
        c = arr[i][2];

        if (minL < l && maxR > r)
        {
            minLindex = i;
            maxRindex = i;
            minL = l;
            maxR = r;
        }
        else if ((minL == l && r > maxR) || (maxR == r && l < minL))
        {
            minL = l;
            maxR = r;
            minLindex = i;
            maxRindex = i;
        }
        else
        {
            if (l == minL && r == maxR)
            {
                if (minLindex == maxRindex)
                {
                    if (arr[i][2] < arr[minLindex][2])
                    {
                        minLindex = i;
                        maxRindex = i;
                    }
                }
                else
                {
                    if ((arr[minLindex][2] + arr[maxRindex][2]) > arr[i][2])
                    {
                        minLindex = i;
                        maxRindex = i;
                    }
                }
            }
            else
            {
                if (l < minL)
                {
                    minL = l;
                    minLindex = i;
                }
                else if (l == minL)
                {
                    if (minLindex != maxRindex)
                    {
                        if (c < arr[minLindex][2])
                        {
                            minLindex = i;
                        }
                    }
                }
                if (r > maxR)
                {
                    maxR = r;
                    maxRindex = i;
                }
                else if (r == maxR)
                {
                    if (minLindex != maxRindex)
                    {
                        if (c < arr[maxRindex][2])
                        {
                            maxRindex = i;
                        }
                    }
                }
            }
        }
        if (maxRindex == minLindex)
        {
            cout << arr[maxRindex][2] << '\n';
        }
        else
        {
            cout << arr[maxRindex][2] + arr[minLindex][2] << '\n';
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