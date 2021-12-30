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
        ll h;
        cin >> n >> h;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        int minDiff = arr[1] - arr[0];
        int maxDiff = arr[1] - arr[0];
        int totalDam = 0;
        int diffarr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            int diff = (arr[i + 1] - arr[i]);
            diffarr[i] = diff;
            totalDam += diff;

            if (diff < minDiff)
            {
                minDiff = arr[i + 1] - arr[i];
            }
            if (diff > maxDiff)
            {
                maxDiff = arr[i + 1] - arr[i];
            }
        }
        if (totalDam < h)
        {
            cout << maxDiff - (h - totalDam) << endl;
        }
        else
        {
            if (maxDiff > h)
            {

                cout << (h - totalDam + maxDiff + 1) / 2 << endl;
            }
            else
            {
                cout << maxDiff - minDiff << endl;
            }
        }
    }
}