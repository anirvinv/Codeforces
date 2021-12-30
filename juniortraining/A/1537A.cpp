#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
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
        int n;
        cin >> n;
        int arr[n];
        ll sum = 0;
        fo(i, n)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum > n)
        {
            cout << sum - n << endl;
        }
        else if (sum == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}