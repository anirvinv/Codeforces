#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int mi = 0;
        int ma = 0;
        if (i == 0)
        {
            mi = abs(arr[0] - arr[1]);
            ma = abs(arr[i] - arr[n - 1]);
        }
        else if (i == n - 1)
        {
            mi = abs(arr[n - 2] - arr[n - 1]);
            ma = abs(arr[i] - arr[0]);
        }
        else
        {
            mi = min(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1]));
            ma = max(abs(arr[i] - arr[n - 1]), abs(arr[i] - arr[0]));
        }
        cout << mi << " " << ma << endl;
    }
}