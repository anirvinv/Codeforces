#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll sum = 0;
        ll ways = 0;
        for (int j = 0; j < n; j++)
        {
            ll value;
            cin >> value;
            sum += value;
            arr[j] = value;
        }

        if ((2 * sum) % n == 0)
        {
            map<int, int> cnt;
            for (int j = 0; j < n; j++)
            {
                cnt[arr[j]]++;
            }
            ll eSum = (2 * sum) / n;

            for (int j = 0; j < n; j++)
            {
                ll key = eSum - arr[j];
                ways += cnt[key];
                if (arr[j] == key)
                {
                    ways--;
                }
            }
        }

        cout << ways / 2 << endl;
    }
}