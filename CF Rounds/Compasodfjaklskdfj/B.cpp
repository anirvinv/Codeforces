#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int sum1 = 0;
            int sum2 = 0;
            for (int i = 1; i <= n / 2; i++)
            {
                sum1 += 2 * i;
                cout << 2 * i << " ";
            }
            for (int i = 0; i < n / 2 - 1; i++)
            {
                cout << 2 * i + 1 << " ";
                sum2 += 2 * i + 1;
            }
            cout << sum1 - sum2 << endl;
        }
    }
}