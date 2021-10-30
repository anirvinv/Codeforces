#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        vector<int> copy;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
            copy.push_back(val);
        }

        sort(arr.begin(), arr.end());
        int range1 = n - x;
        int range2 = x + 1;

        vector<int> missing;
        for (int i = 0; i < arr.size(); i++)
        {
            if (copy[i] != arr[i])
            {
                missing.push_back(i + 1);
            }
        }
        bool ans = true;
        for (int i = 0; i < missing.size(); i++)
        {
            if (!(missing[i] <= n - x || missing[i] >= x + 1))
            {
                ans = false;
                break;
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}