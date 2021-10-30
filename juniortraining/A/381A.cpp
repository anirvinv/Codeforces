#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int d = 0;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    while (arr.size() > 0)
    {
        if (arr.size() == 1)
        {
            s += arr[0];
            break;
        }
        if (arr[0] > arr[arr.size() - 1])
        {
            s += arr[0];
            arr.erase(arr.begin());
        }
        else
        {
            s += arr[arr.size() - 1];
            arr.erase(arr.begin() + arr.size() - 1);
        }

        if (arr[0] > arr[arr.size() - 1])
        {
            d += arr[0];
            arr.erase(arr.begin());
        }
        else
        {
            d += arr[arr.size() - 1];
            arr.erase(arr.begin() + arr.size() - 1);
        }
    }

    cout << s << " " << d << endl;
}