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
        int index;
        cin >> index;
        index--;
        arr[index] = i + 1;
    }
    for (int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
}
