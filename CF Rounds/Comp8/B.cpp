#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[2 * 50];
bool barr[2 * 50];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            if (barr[arr[i]] == false)
            {
                cout << arr[i] << " ";
                barr[arr[i]] = true;
            }
        }

        cout << endl;
        memset(barr, 0, sizeof barr);
    }
}