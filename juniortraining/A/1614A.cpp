#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll total = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= l && arr[i] <= r)
            {
                total += arr[i];
                count++;
                if (total > k)
                {
                    total -= arr[i];
                    count--;
                    break;
                }
            }
        }
        cout << count << endl;
    }
}