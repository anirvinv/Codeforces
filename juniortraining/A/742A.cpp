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
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else if (n % 4 == 0)
    {
        cout << 6 << endl;
    }
    else if (n % 4 == 1)
    {
        cout << 8 << endl;
    }
    else if (n % 4 == 2)
    {
        cout << 4 << endl;
    }
    else if (n % 4 == 3)
    {
        cout << 2 << endl;
    }
}