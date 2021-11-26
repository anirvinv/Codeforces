#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[100001];

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 1; i <= k; i++)
    {
        int w;
        cin >> w;

        for (int j = 0; j < w; j++)
        {
            int val;
            cin >> val;

            int prev = val;
            while (arr[val] != val)
            {
                prev = val;
                val = arr[val];
            }
            if (arr[i] == arr[val])
            {
                arr[prev] = i;
            }
            else
            {
                arr[val] = i;
            }
        }
    }
    unordered_map<int, int> cnt;
    for (int i = 1; i <= n; i++)
    {
        cnt[arr[i]]++;
    }
    int root = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == i && cnt[i] > 1)
        {
            root = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == i && i != root)
        {
            arr[i] = root;
        }
    }
    arr[root] = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << "\n";
    }
}