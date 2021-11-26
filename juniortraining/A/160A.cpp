#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(vector<int> arr, int l, int r)
{
    int ans = 0;
    for (int i = l; i < r; i++)
    {
        ans += arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        sort(arr.begin(), arr.end());

        int ptr = n - 1;
        int sum1 = 1;
        int sum2 = 0;
        int count = 0;
        while (sum1 >= sum2)
        {
            sum1 = sum(arr, 0, ptr);
            sum2 = sum(arr, ptr, arr.size());
            count++;
            ptr--;
        }
        cout << count << endl;
    }
}