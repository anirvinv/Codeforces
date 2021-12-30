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
        int n, a, b;
        cin >> n >> a >> b;
        if ((max(a, b) - min(a, b) > 1) || (a + b + 2) > n)
        {
            cout << -1 << '\n';
        }
        else
        {
            int arr[n];
            bool maxMount = a > b;
            if (maxMount)
            {
                fo(i, n)
                {
                    arr[i] = n - i;
                }
            }
            else
            {
                fo(i, n)
                {
                    arr[i] = i + 1;
                }
            }
            if (maxMount)
            {
                int count = n;
                for (int i = 1; i <= a * 2; i += 2)
                {
                    arr[i] = count--;
                }
                for (int i = 0; i <= a * 2; i += 2)
                {
                    arr[i] = count--;
                }
                if (a == b)
                {
                    int temp = arr[n - 1];
                    arr[n - 1] = arr[n - 2];
                    arr[n - 2] = temp;
                }
            }
            else if (a == 0 && b == 0)
            {
            }
            else
            {
                int count = 1;
                for (int i = 1; i <= b * 2; i += 2)
                {
                    arr[i] = count++;
                }
                for (int i = 0; i <= b * 2; i += 2)
                {
                    arr[i] = count++;
                }
                if (a == b)
                {
                    int temp = arr[n - 1];
                    arr[n - 1] = arr[n - 2];
                    arr[n - 2] = temp;
                }
            }
            fo(i, n)
            {
                cout << arr[i] << " ";
            }
            cout << '\n';
        }
    }
}