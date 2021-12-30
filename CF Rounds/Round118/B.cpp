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
        map<int, int> occ;
        fo(i, n)
        {
            cin >> arr[i];
            occ[arr[i]]++;
        }
        sort(arr, arr + n);
        pair<int, int> ps[n / 2];
        int count = 0;

        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                if (arr[j] == 1)
                {
                    ps[count] = (make_pair(arr[i], arr[j]));
                    count++;
                    break;
                }
                else
                {
                    if (occ[arr[i] % arr[j]] == 0)
                    {
                        ps[count] = (make_pair(arr[i], arr[j]));
                        count++;
                    }
                    if (count == n / 2)
                    {
                        break;
                    }
                }
            }
            if (count == n / 2)
            {
                break;
            }
        }

        for (auto p : ps)
        {
            cout << p.first << " " << p.second << endl;
        }
    }
}