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
        int arr[4 * n];
        for (int i = 0; i < 4 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 4 * n);
        int prod = arr[0] * arr[4 * n - 1];
        bool works = true;
        for (int i = 0; i < 4 * n; i += 2)
        {
            if (arr[i] != arr[i + 1])
            {
                works = false;
                break;
            }
            if (arr[i] * arr[4 * n - 1 - i] != prod)
            {
                works = false;
                break;
            }
        }
        if (works)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}