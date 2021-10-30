#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int gcf(int a, int b)
{
    int g = b;
    int l = a;
    if (a > b)
    {
        g = a;
        l = b;
    }
    int ans = 0;
    for (int i = 1; i <= l; i++)
    {
        if (l % i == 0 && g % i == 0)
        {
            ans = i;
        }
    }
    return ans;
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
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            if (!count(nums.begin(), nums.end(), value))
            {
                nums.push_back(value);
            }
            arr[i] = value;
        }

        int ans = abs(nums[0] - nums[1]);
        vector<int> differences;
        for (int i = 1; i < nums.size() - 1; i++)
        {
            differences.push_back(abs(nums[i] - nums[i + 1]));
        }
        bool allSame = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                allSame = false;
                break;
            }
        }

        for (int i = 0; i < differences.size(); i++)
        {
            ans = gcf(ans, differences[i]);
            if (ans == 1)
            {
                break;
            }
        }

        if (!allSame)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}