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
        fo(i, n)
        {
            cin >> arr[i];
        }
        int currentMax = arr[n - 1];
        int size = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > currentMax)
            {
                currentMax = arr[i];
                size++;
            }
        }
        cout << size << endl;
    }
}