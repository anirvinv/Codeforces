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

        vector<int> v;
        int val;
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        ll k = 0;

        for (int j = 0; j < n; j++)
        {
            k += v[j];
        }
        ll ways = 0;
        if (k % n == 0)
        {
            k /= n;
            for (int j = 0; j < v.size(); j++)
            {
                int a = v[j];
                int needle = 2 * k - a;
                if (binary_search(v.begin(), v.begin() + j - 1, needle) || binary_search(v.begin() + j, v.end(), needle))
                {
                    cout << "NEEDLE: " << needle << endl;
                    ways++;
                }
            }
            cout << ways << endl;
        }
    }
}