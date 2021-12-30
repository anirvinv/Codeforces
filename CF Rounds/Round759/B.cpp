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
void evert(int arr[], int n)
{
    int newArr[n];
    int last = arr[n - 1];
    int counter = 0;
    fo(i, n)
    {
        if (arr[i] <= last)
        {
            newArr[counter++] = arr[i];
        }
    }
    fo(i, n)
    {
        if (arr[i] > last)
        {
            newArr[counter++] = arr[i];
        }
    }
    fo(i, n)
    {
        arr[i] = newArr[i];
    }
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
        int maxEl;
        cin >> maxEl;
        fo(i, n)
        {
            if (i == 0)
            {
                arr[i] = maxEl;
            }
            else
            {
                cin >> arr[i];
                if (arr[i] > maxEl)
                {
                    maxEl = arr[i];
                }
            }
        }

        if (arr[n - 1] == maxEl)
        {
            cout << 0 << endl;
        }
        else
        {
            int lo = 0;
            int hi = n;
            int arrcpy[n];

            while (hi - lo > 1)
            {
                fo(i, n)
                {
                    arrcpy[i] = arr[i];
                }
                int mid = (lo + hi) / 2;
                fo(i, mid)
                {
                    evert(arrcpy, n);
                }
                if (arrcpy[n - 1] == maxEl)
                {
                    hi = mid;
                }
                else
                {
                    lo = mid;
                }
            }
            cout << hi << endl;
        }
    }
}