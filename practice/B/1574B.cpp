#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, m;

        cin >> a >> b >> c >> m;
        int maxPairs = a + b + c - 3;
        vector<int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(), arr.end());
        a = arr[0];
        b = arr[1];
        c = arr[2];

        int minPairs = c - (a + b) - 1;
        if (m >= minPairs && m <= maxPairs)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}