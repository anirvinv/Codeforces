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

        int n, k;
        cin >> n >> k;
        int arr[n];
        int sorted[n];
        map<int, int> indices;

        fo(i, n)
        {
            int val;
            cin >> val;
            arr[i] = val;
            indices[val] = i;
            sorted[i] = val;
        }

        sort(sorted, sorted + n);

        int groups = 1;

        for (int i = 0; i < n - 1; i++)
        {
            int a = sorted[i];
            int b = sorted[i + 1];
            if (indices[b] != (indices[a] + 1))
            {
                ++groups;
            }
        }

        if (k < groups)
        {
            cout << "No" << '\n';
        }
        else
        {
            cout << "Yes" << '\n';
        }
    }
}