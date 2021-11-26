#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, b, d;

    cin >> n >> b >> d;
    int arr[n];
    int waste = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b)
        {
        }
        else
        {
            waste += arr[i];
        }
        if (waste > d)
        {
            count++;
            waste = 0;
        }
    }
    cout << count << endl;
}