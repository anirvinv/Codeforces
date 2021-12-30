#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool good(int arr[], int n, int l)
{
    int ptr1 = l;
    int ptr2 = n - 1;
    int added = -1;

    while (ptr2 >= ptr1)
    {
        if (arr[ptr1] <= arr[ptr2])
        {
            if (arr[ptr1] >= added)
            {
                added = arr[ptr1];
                ptr1++;
            }
            else
            {
                return false;
            }
        }
        else if (arr[ptr2] <= arr[ptr1])
        {
            if (arr[ptr2] >= added)
            {
                added = arr[ptr2];
                ptr2--;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // cout << good(arr, n, 0, n - 1) << endl;
        int l = -1;
        int h = n - 1;

        while (h - l > 1)
        {
            int m = (h + l) / 2;
            // cout << good(arr, n, l, m) << endl;
            if (good(arr, n, m))
            {
                h = m;
            }
            else
            {
                l = m;
            }
        }
        cout << h << endl;
    }
}