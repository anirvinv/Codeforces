#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    fo(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    // finding the smallest indices
    int ptr1 = 0;
    int ptr2 = 1;
    int minDiff = arr[1] - arr[0];
    int minIndex = ptr1;
    while (ptr2 < n)
    {
        if (arr[ptr2] - arr[ptr1] < minDiff)
        {
            minIndex = ptr1;
            minDiff = arr[ptr2] - arr[ptr1];
        }
        ptr1++;
        ptr2++;
    }

    cout << arr[minIndex] << ' ';
    for (int i = minIndex + 2; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < minIndex; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << arr[minIndex + 1] << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--)
    {
        solve();
    }
}