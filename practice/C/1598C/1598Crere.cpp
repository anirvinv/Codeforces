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

        vector<int> arr;
        ll k = 0;
        for (int j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            k += value;
            arr.push_back(value);
        }

        sort(arr.begin(), arr.end());
        ll ways = 0;
        int ptr1 = 0;
        int ptr2 = n - 1;

        if (k % n == 0)
        {
            k /= n;
            int sum;
            while (ptr1 < ptr2)
            {
                sum = arr[ptr1] + arr[ptr2];
                if (sum == (2 * k))
                {
                    ptr1++;
                    ptr2 = n - 1; // still n^2 wtfffffffffffffffffffffffffffff
                    ways++;
                }
                else if (sum > k)
                {
                    ptr2--;
                }
                else
                {
                    ptr1++;
                }
            }
        }
        cout << ways << endl;
    }
}