#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n][5];
        for (int j = 0; j < n; j++)
        {
            for (size_t k = 0; k < 5; k++)
            {
                cin >> arr[j][k];
            }
        }

        vector<int> days[5];

        for (int k = 0; k < 5; k++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j][k] == 1)
                {
                    days[k].push_back(j + 1);
                }
            }
        }
        int count = 0;
        for (vector<int> v : days)
        {
            if (v.size() >= n / 2)
            {
                count++;
            }
        }

        // cout << count << endl;
        if (count < 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> distinct[count];
            int index = 0;
            // creating all sets with n/2 size
            for (vector<int> v : days)
            {

                if (v.size() >= (n / 2))
                {
                    distinct[index] = v;
                    index++;
                }
            }
            bool found = false;
            for (int l = 0; l < count - 1; l++)
            {
                set<int> s;

                for (int j = l + 1; j < count; j++)
                {
                    // cout << j << ": ";
                    for (int k : distinct[l])
                    {
                        cout << k << " ";
                        s.insert(k);
                    }
                    cout << endl;
                    for (int k : distinct[j])
                    {
                        cout << k << " ";
                        s.insert(k);
                    }
                    cout << endl;
                }
                if (s.size() == n)
                {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "NO" << endl;
            }
        }
    }
}
// Test 1:
// 1
// 6
// 0 0 1 0 0
// 0 0 0 0 1
// 0 0 1 0 0
// 0 0 0 0 1
// 0 0 1 0 0
// 0 0 0 0 1
// Test 2:
