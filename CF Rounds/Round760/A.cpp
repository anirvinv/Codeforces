#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n = 7;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        cout << arr[0] << " " << arr[1] << " " << arr[n - 1] - (arr[0] + arr[1]) << endl;
    }
}