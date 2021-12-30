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
void edit(int arr[])
{
    int barr[5] = {5, 4, 3, 2, 1};
    arr = barr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5] = {1, 2, 3, 4, 5};
    edit(arr);
    cout << arr[0];
}