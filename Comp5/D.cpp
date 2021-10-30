#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int boys[k];
        int girls[k];
        for (int i = 0; i < k; i++)
        {
            cin >> boys[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> girls[i];
        }

        map<int, int> numB;

        for (int i = 0; i < k; i++)
        {
            numB[boys[i]] += 1;
        }
        map<int, int> numG;

        for (int i = 0; i < k; i++)
        {
            numG[girls[i]] += 1;
        }
        ll sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += k - 1 - (numB[boys[i]] - 1) - (numG[girls[i]] - 1);
        }

        cout << sum / 2 << endl;
    }
}