#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
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
        int n;
        cin >> n;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        bool watered = false;
        int height = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] && watered)
            {
                height += 5;
            }
            else if (arr[i])
            {
                height += 1;
                watered = true;
            }
            if (arr[i] == 0)
            {
                watered = false;
                if (i != 0 && arr[i - 1] == 0)
                {
                    height = -1;
                    break;
                }
            }
        }
        cout << height << endl;
    }
}