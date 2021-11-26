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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        bool in = true;
        while (in)
        {
            for (int i = arr.size() - 1; i >= 0; i--)
            {
                if (arr[i] % (i + 2) != 0)
                {
                    arr.erase(arr.begin() + i);
                    if (arr.size() == 0)
                    {
                        in = false;
                        break;
                    }
                    break;
                }
                if (i == 0)
                {
                    in = false;
                    break;
                }
            }
        }

        if (arr.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
