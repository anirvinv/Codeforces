#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll mi = min(a, b);
        ll ma = max(a, b);
        a = ma;
        b = mi;
        // b pairs of a and b
        ll pairs = b;
        ll remaining = a - b;
        ll teams = 0;

        teams += min(pairs, remaining / 2);
        pairs -= min(pairs, remaining / 2);

        teams += pairs / 2;
        cout << teams << endl;
    }
}