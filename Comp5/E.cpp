#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int depths[102];
int arr[102];
int maxInd(int l, int r)
{
    int max = arr[l];
    int index = l;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}
void depth(int l, int r, int d)
{
    if (l > r)
    {
        return;
    }
    int m = maxInd(l, r);
    depths[m] = d;
    depth(l, m - 1, d + 1);
    depth(m + 1, r, d + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        depth(0, n - 1, 0);
        for (int i = 0; i < n; i++)
        {
            cout << depths[i] << " ";
        }
        cout << endl;
    }
}