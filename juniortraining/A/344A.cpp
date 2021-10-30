#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int ans = 1;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string curr = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != curr)
        {
            curr = arr[i];
            ans++;
        }
    }
    cout << ans << endl;
}