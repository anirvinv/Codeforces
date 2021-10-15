#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        ll k = 0;

        for (int j = 0; j < n; j++)
        {
            k += arr[j];
                }
        if (k % n == 0)
        {
            k /= n;
            int ways = 0;
            for (int l = 0; l < n - 1; l++)
            {
                for (int m = l + 1; m < n; m++)
                {
                    if ((2 * k) == arr[l] + arr[m])
                    {
                        ways++;
                    }
                }
            }
            cout << ways << endl;
        }
        else
        {
            if (n % 2 == 0 && (k % n) == (n / 2))
            {
                ll ways = 0;
                for (int l = 0; l < n - 1; l++)
                {
                    for (int m = l + 1; m < n; m++)
                    {
                        if (((2 * k) / n) == arr[l] + arr[m])
                        {
                            ways++;
                        }
                    }
                }
                cout << ways << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}