#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m;
    cin >> n >> m;
    bool arr1[n + 1];
    bool arr2[n + 1];
    memset(arr1, 1, sizeof arr1);
    memset(arr2, 1, sizeof arr2);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        if (arr1[a] && arr2[b] && arr2[a] && arr1[b])
        {
            arr1[a] = 0;
            arr2[b] = 0;
        }
        else if (!arr2[a] && arr1[b])
        {
            arr1[b] = 0;
        }
        else if (!arr2[b] && arr1[a])
        {
            arr1[a] = 0;
        }
        else if (!arr1[a] && arr2[b])
        {
            arr2[b] = 0;
        }
        else if (!arr1[b] && arr2[a])
        {
            arr2[a] = 0;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (arr1[i] && arr2[i])
        {
            arr1[i] = 0;
        }
    }

    int total = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n + 1; i++)
    {
        cout << arr2[i] << " ";
    }
    for (int i = 1; i < n + 1; i++)
    {
        total += arr1[i] + arr2[i];
    }
    if (n - total < 0)
    {
        if (n % 2 != 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if (total % 2 != 0)
        {
            total--;
        }
        cout << n - total << endl;
    }
}