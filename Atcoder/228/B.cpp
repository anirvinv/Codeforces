#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    int arr[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
    }
    bool learnt[n + 1];
    memset(learnt, 0, sizeof learnt);

    int count = 0;
    int f = x;
    while (!learnt[f])
    {
        count++;
        learnt[f] = true;
        f = arr[f];
    }
    cout << count << '\n';
}