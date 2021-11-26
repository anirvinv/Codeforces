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

    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            cout << 2 * k - 1;
        }
        else
        {
            k -= n / 2;
            cout << 2 * k;
        }
    }
    else
    {
        if (k <= (n / 2 + 1))
        {
            cout << 2 * k - 1;
        }
        else
        {
            k -= (n / 2 + 1);
            cout << 2 * k;
        }
    }
}