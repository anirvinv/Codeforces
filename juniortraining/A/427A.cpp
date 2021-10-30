#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int free = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            free += arr[i];
        }
        else if (arr[i] == -1 && free > 0)
        {
            free--;
        }
        else if (arr[i] == -1)
        {
            ans++;
        }
    }

    cout << ans << endl;
}