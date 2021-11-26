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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << arr[0] << endl;
        }
        else
        {
            sort(arr, arr + n);
            int minimum = arr[0];
            for (int i = n - 1; i >= 1; i--)
            {
                minimum = max(minimum, arr[i] - arr[i - 1]);
            }
            cout << minimum << endl;
        }
    }
}