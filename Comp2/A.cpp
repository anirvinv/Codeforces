#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n, H;
        cin >> n >> H;
        int weapons[n];
        for (size_t j = 0; j < n; j++)
        {
            cin >> weapons[j];
        }
        sort(weapons, weapons + n);
        int max1 = weapons[n - 1];
        int max2 = weapons[n - 2];

        int sum = max1 + max2;

        int steps = 2 * (H / sum);

        H = H - sum * (H / sum);

        if (H > 0)
        {
            H -= max1;
            steps++;
        }
        if (H > 0)
        {
            H -= max2;
            steps++;
        }

        cout << steps << endl;
    }
}