#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int k = 0; k < n; k++)
        {
            cin >> arr[k];
        }

        deque<int> d;
        d.push_front(arr[0]);
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < d.front())
            {
                d.push_front(arr[j]);
            }
            else
            {
                d.push_back(arr[j]);
            }
        }

        for (auto j = d.begin(); j != d.end(); j++)
        {
            cout << d.front() << " ";
            d.pop_front();
        }
        cout << endl;
    }
}