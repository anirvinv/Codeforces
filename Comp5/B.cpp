#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int steps = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int ma = max(arr[i], arr[i + 1]);
            int mi = min(arr[i], arr[i + 1]);

            while (ma > 2 * mi)
            {
                steps++;
                mi *= 2;
            }
        }

        cout << steps << endl;
    }
}