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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }
    bool changed = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] != arr[i][1])
        {
            changed = true;
            break;
        }
    }
    if (changed)
    {
        cout << "rated" << endl;
    }
    else
    {
        bool noninc = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i][0] < arr[i + 1][0])
            {
                noninc = false;
                break;
            }
        }
        if (!noninc)
        {
            cout << "unrated" << endl;
        }
        else
        {
            cout << "maybe" << endl;
        }
    }
}