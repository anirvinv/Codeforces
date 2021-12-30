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
        int n;
        cin >> n;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        if (n % 2 == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {

            bool yes = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] >= arr[i + 1])
                {
                    yes = true;
                    break;
                }
            }
            if (yes)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
}
