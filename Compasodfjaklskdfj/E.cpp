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
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll tempMax = arr[0];
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] * arr[i + 1] > 0)
            {
                tempMax = max(tempMax, arr[i + 1]);
            }
            else
            {
                sum += tempMax;
                tempMax = arr[i + 1];
            }
        }
        tempMax = max(tempMax, arr[n - 1]);
        sum += tempMax;

        cout << sum << endl;
    }
}