#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool arr[101];
int main()
{
    memset(arr, 0, sizeof arr);
    int n, m;
    cin >> n >> m;
    int total = 2 * n;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        if (!arr[a] && !arr[b])
        {
            total -= 2;
        }
        else
        {
            total -= 1;
        }
        arr[a] = true;
        arr[b] = true;
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