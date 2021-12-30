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
    int n;
    cin >> n;
    bool arr[n + 1];
    int p;
    cin >> p;
    memset(arr, 0, sizeof arr);
    while (p--)
    {
        int i;
        cin >> i;
        arr[i] = true;
    }
    cin >> p;
    while (p--)
    {
        int i;
        cin >> i;
        arr[i] = true;
    }
    bool noMiss = true;
    for (int i = 1; i <= n; i++)
    {
        if (!arr[i])
        {
            noMiss = false;
        }
    }
    if (noMiss)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}